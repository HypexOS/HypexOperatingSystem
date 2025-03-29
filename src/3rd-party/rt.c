//
// Created by Neko on 29.03.2025.
//

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <locale.h>
#include <stdbool.h>
#include "nanoprintf.h"
#include <hal/io.h>

#if UINT32_MAX == UINTPTR_MAX
#define STACK_CHK_GUARD 0xe2dee396
#else
#define STACK_CHK_GUARD 0x595e9fbd94fda766
#endif

int errno = 0;
void *__dso_handle;
void *__dso_handle = NULL;
__attribute__((weak)) bool __libc_single_threaded = false;
[[gnu::used]] uintptr_t __stack_chk_guard = STACK_CHK_GUARD;
__attribute__((used)) struct _IO_FILE *stderr = NULL;

static struct lconv default_lconv = {
    ".", // decimal_point
    "",  // thousands_sep
    "",  // grouping
    "",  // int_curr_symbol
    "",  // currency_symbol
    ".", // mon_decimal_point
    "",  // mon_thousands_sep
    "",  // mon_grouping
    "",  // positive_sign
    "-", // negative_sign
    127, // int_frac_digits (CHAR_MAX)
    127, // frac_digits (CHAR_MAX)
    1,   // p_cs_precedes (positive)
    0,   // p_sep_by_space (positive)
    1,   // n_cs_precedes (negative)
    0,   // n_sep_by_space (negative)
    1,   // p_sign_posn (positive)
    1,    // n_sign_posn (negative)
    0,
    0,
    0,
    0,
    0,
    0,
};

struct lconv *localeconv(void)
{
    return &default_lconv;
}

int *__errno_location(void)
{
    return &errno;
}

int __cxa_atexit(void (*f)(void *), void *obj, void *dso)
{
    (void)f;
    (void)obj;
    (void)dso;
    // printf("__cxa_atexit(f=%p obj=%p dso=%p) has been called.\n", f, obj, dso);

    return 0;
}

__attribute__((noreturn)) void __stack_chk_fail(void)
{
    printf("*** Stack smashing detected ***\n");
    while (true)
    {
        asm volatile("cli; hlt");
    }
}

void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function)
{
    printf("__assert_fail(): %s at: %s:%d in function: %s\n", assertion, file, line, function);
    asm volatile("cli; hlt");
}

__attribute__((noreturn)) void abort()
{
    printf("Aborting!\n");
    asm volatile("cli; hlt");
}

int snprintf(char *str, const size_t size, const char *format, ...)
{
    va_list args;
    va_start(args, format);

    const int written = npf_vsnprintf(str, size, format, args);

    va_end(args);

    return written;
}

void *memset(void *s, int c, size_t n)
{
    unsigned char *p = (unsigned char *)(s);
    while (n--)
    {
        *p++ = (unsigned char)(c);
    }
    return s;
}

int memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1 = (const unsigned char *)(s1);
    const unsigned char *p2 = (const unsigned char *)(s2);

    for (size_t i = 0; i < n; ++i)
    {
        if (p1[i] < p2[i])
        {
            return -1;
        }
        else if (p1[i] > p2[i])
        {
            return 1;
        }
    }

    return 0;
}

int strcmp(const char *str1, const char *str2)
{
    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 != *str2)
        {
            return (unsigned char)(*str1) - (unsigned char)(*str2);
        }
        str1++;
        str2++;
    }

    return (unsigned char)(*str1) - (unsigned char)(*str2);
}

void *memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)(dest);
    const unsigned char *s = (const unsigned char *)(src);

    while (n--)
    {
        *d++ = *s++;
    }

    return dest;
}

void *memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)(dest);
    const unsigned char *s = (const unsigned char *)(src);

    if (d < s || d >= (s + n))
    {
        // No overlap, or destination is before the source. Copy forwards
        while (n--)
        {
            *d++ = *s++;
        }
    }
    else
    {
        // Overlap, copy backwards
        d += n;
        s += n;
        while (n--)
        {
            *(--d) = *(--s);
        }
    }

    return dest;
}

size_t strlen(const char *str)
{
    size_t length = 0;
    while (str[length] != '\0')
    {
        ++length;
    }
    return length;
}

const void *memchr(const void *__s, int __c, size_t __n)
{
    const unsigned char *p = (const unsigned char *)(__s);
    unsigned char target = (unsigned char)(__c);

    for (size_t i = 0; i < __n; ++i)
    {
        if (p[i] == target)
        {
            return (const void*)(&p[i]);
        }
    }
    return NULL;
}

long strtol(const char *nptr, char **endptr, int base)
{
    const char *p = nptr;
    while (*p == ' ' || *p == '\t') // Skip whitespace
        ++p;

    bool negative = false;
    if (*p == '-')
    {
        negative = true;
        ++p;
    }
    else if (*p == '+')
    {
        ++p;
    }

    long result = 0;
    while (*p)
    {
        int digit = -1;
        if (*p >= '0' && *p <= '9')
            digit = *p - '0';
        else if (*p >= 'A' && *p <= 'Z')
            digit = *p - 'A' + 10;
        else if (*p >= 'a' && *p <= 'z')
            digit = *p - 'a' + 10;

        if (digit < 0 || digit >= base)
            break;

        result = result * base + digit;
        ++p;
    }

    if (endptr)
        *endptr = (char *)(p);

    return negative ? -result : result;
}

float strtof(const char *nptr, char **endptr)
{
    const char *p = nptr;
    while (*p == ' ' || *p == '\t') // Skip whitespace
        ++p;

    bool negative = false;
    if (*p == '-')
    {
        negative = true;
        ++p;
    }
    else if (*p == '+')
    {
        ++p;
    }

    float result = 0.0f;
    while (*p >= '0' && *p <= '9') // Integer part
    {
        result = result * 10.0f + (*p - '0');
        ++p;
    }

    if (*p == '.') // Fractional part
    {
        ++p;
        float fraction = 0.1f;
        while (*p >= '0' && *p <= '9')
        {
            result += (*p - '0') * fraction;
            fraction *= 0.1f;
            ++p;
        }
    }

    if ((*p == 'e' || *p == 'E') && (*(p + 1) == '+' || *(p + 1) == '-' || (*(p + 1) >= '0' && *(p + 1) <= '9')))
    {
        ++p;
        bool exp_negative = false;
        if (*p == '-')
        {
            exp_negative = true;
            ++p;
        }
        else if (*p == '+')
        {
            ++p;
        }

        int exponent = 0;
        while (*p >= '0' && *p <= '9')
        {
            exponent = exponent * 10 + (*p - '0');
            ++p;
        }

        float exp_factor = 1.0f;
        while (exponent--)
            exp_factor *= 10.0f;

        result *= exp_negative ? (1.0f / exp_factor) : exp_factor;
    }

    if (endptr)
        *endptr = (char*)(p);

    return negative ? -result : result;
}

int toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return c - ('a' - 'A');
    return c;
}

int tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + ('a' - 'A');
    return c;
}

long long int strtoll(const char *str, char **endptr, int base)
{
    // Skip leading white spaces
    while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r' || *str == '\f' || *str == '\v')
    {
        str++;
    }

    // Check for sign
    bool negative = false;
    if (*str == '-')
    {
        negative = true;
        str++;
    }
    else if (*str == '+')
    {
        str++;
    }

    // If the base is 0, detect the base from the input string
    if (base == 0)
    {
        if (*str == '0')
        {
            str++;
            if (*str == 'x' || *str == 'X')
            {
                base = 16; // Hexadecimal
                str++;
            }
            else
            {
                base = 8; // Octal
            }
        }
        else
        {
            base = 10; // Decimal by default
        }
    }

    long long int result = 0;
    bool overflow = false;

    while (true)
    {
        char digit = *str;

        // Handle hexadecimal digits if base is 16
        if (base == 16 &&
            ((digit >= '0' && digit <= '9') || (digit >= 'a' && digit <= 'f') || (digit >= 'A' && digit <= 'F')))
        {
            if (digit >= '0' && digit <= '9')
            {
                digit -= '0';
            }
            else if (digit >= 'a' && digit <= 'f')
            {
                digit -= 'a' - 10;
            }
            else
            {
                digit -= 'A' - 10;
            }
        }
        // Handle octal digits if base is 8
        else if (base == 8 && (digit >= '0' && digit <= '7'))
        {
            digit -= '0';
        }
        // Handle decimal digits if base is 10
        else if (base == 10 && (digit >= '0' && digit <= '9'))
        {
            digit -= '0';
        }
        else
        {
            break; // Invalid character
        }

        // Handle overflow detection
        if (result > (LLONG_MAX - digit) / base)
        {
            overflow = true;
            break;
        }

        result = result * base + digit;
        str++;
    }

    // If negative, negate the result
    if (negative)
    {
        result = -result;
    }

    // Set endptr if it's not null
    if (endptr)
    {
        *endptr = (char*)(str);
    }

    // Handle overflow and underflow cases
    if (overflow)
    {
        if (negative)
        {
            return LLONG_MIN;
        }
        else
        {
            return LLONG_MAX;
        }
    }

    return result;
}

// char *strdup(const char *str)
// {
//
//     // Allocate memory to store the duplicate string
//     size_t len = strlen(str) + 1; // +1 for the null terminator
//     char *copy = (char*)(malloc(len));
//
//     if (copy == NULL)
//     {
//         return NULL; // Memory allocation failed
//     }
//
//     // Copy the string into the allocated memory
//     memcpy(copy, str, len);
//
//     return copy;
// }

void *__memcpy_chk(void *dest, const void *src, size_t len, size_t dest_len)
{
    if (len > dest_len)
    {
        printf("Warning! __memcpy_chk: len > dest_len\n");
        asm volatile("cli; hlt");
        __builtin_unreachable();
    }

    // Perform the actual memory copy
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    for (size_t i = 0; i < len; i++)
    {
        d[i] = s[i];
    }

    return dest;
}

int __fprintf_chk(void *stream, int flag, const char *format, size_t dest_len, ...)
{
    va_list args;
    va_start(args, format);

    (void)flag;
    if (stream == NULL || format == NULL)
    {
        return -1;
    }

    char buffer[1024];
    int len = npf_vsnprintf(buffer, sizeof(buffer), format, args);

    va_end(args);

    if ((size_t)len >= dest_len)
    {
        return -1;
    }

    printf("%s", buffer);
    return 1;
}

int strncmp(const char *str1, const char *str2, size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            return 0;
        }
        if (str1[i] != str2[i])
        {
            return (unsigned char)str1[i] - (unsigned char)str2[i];
        }
    }
    return 0;
}

double pow(double x, double y)
{
    if (y == 0)
    {
        return 1.0; // x^0 is always 1
    }

    double result = 1.0;
    if (y > 0)
    {
        for (int i = 0; i < y; i++)
        {
            result *= x;
        }
    }
    else
    {
        for (int i = 0; i < -y; i++)
        {
            result /= x;
        }
    }

    return result;
}

int abs(int x)
{
    return (x < 0) ? -x : x;
}

float powf(const float x, const float y)
{
    if (y == 0)
    {
        return 1.0f; // x^0 is always 1
    }

    float result = 1.0f;
    if (y > 0)
    {
        for (int i = 0; i < (int)(y); i++)
        {
            result *= x;
        }
    }
    else
    {
        for (int i = 0; i < (int)(-y); i++)
        {
            result /= x;
        }
    }

    return result;
}

float ldexpf(const float x, const int exp)
{
    return x * (1 << exp);
}

typedef struct
{
    volatile int locked;
} mutex_t;

void debug_puts(const char* msg)
{
    while (*msg != 0)
    {
        outb(0xe9, *msg);
        msg++;
    }
}

int printf(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);

    char buffer[4096] = {0};
    const int result = npf_vsnprintf(buffer, 4096, fmt, args);
    debug_puts(buffer);

    va_end(args);
    return result;
}

// Atomic Test-and-Set
static inline int atomic_test_and_set(volatile int *ptr)
{
    int old = 1;
    __asm__ __volatile__("xchg %0, %1" : "=r"(old), "=m"(*ptr) : "0"(old), "m"(*ptr) : "memory");
    return old;
}

// Mutex Lock (Spinlock)
void pthread_mutex_lock(mutex_t *mutex)
{
    while (atomic_test_and_set(&mutex->locked))
    {
        // Busy wait (spin)
        while (mutex->locked)
            ;
    }
}

// Mutex Unlock
void pthread_mutex_unlock(mutex_t *mutex)
{
    __asm__ __volatile__("mfence" ::: "memory"); // Memory barrier
    mutex->locked = 0;
}

// Custom mprotect using syscall
int mprotect(void *addr, size_t len, int prot)
{
    printf("mprotect(%p, %zu, %d) = 0\n", addr, len, prot);

    return 0;
}

int fprintf(FILE *stream, const char *format, ...)
{
    (void)stream;
    va_list args;
    va_start(args, format);

    char buffer[4096] = {0};
    const int result = npf_vsnprintf(buffer, 4096, format, args);
    printf("%s", buffer);

    va_end(args);
    return result;
}

int getpagesize()
{
    return 4096;
}