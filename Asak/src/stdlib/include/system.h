#pragma once

#include <stdint.h>
#include <time.h>


    int isalnum(int c);
    int iscntrl(int c);
    int isgraph(int c);
    int islower(int c);
    int isprint(int c);
    int ispunct(int c);
    int isupper(int c);
    int isxdigit(int c);
    __attribute__((noreturn)) void abort();
    double acos(double x);
    double asin(double x);
    double atan2(double y, double x);
    double ceil(double x);
    clock_t clock();
    double cos(double x);
    double cosh(double x);
    double difftime(time_t t1, time_t t2);
    void exit(int status);
    double exp(double x);
    double floor(double x);
    double fmod(double x, double y);
    double frexp(double x, int *exp);
    struct tm *gmtime(const time_t *time);
    double ldexp(double x, int exp);
    struct tm *localtime(const time_t *time);
    double log(double x);
    double log10(double x);
    double log2(double x);
    time_t mktime(struct tm *tm);
    double pow(double x, double y);
    int remove(const char *path);
    int rename(const char *oldPath, const char *newPath);
    char *setlocale(int category, const char *locale);
    void (*signal(int sig, void (*func)(int)))(int);
    double sin(double x);
    double sinh(double x);
    int snprintf(char *str, size_t size, const char *format, ...);
    int sprintf(char *str, const char *format, ...);
    void srand(unsigned int seed);
    int strcoll(const char *s1, const char *s2);
    char *strerror(int errnum);
    size_t strftime(char *s, size_t max, const char *format, const struct tm *tm);
    char *strpbrk(const char *s, const char *accept);
    double strtod(const char *nptr, char **endptr);
    int system(const char *command);
    double tan(double x);
    double tanh(double x);
    time_t time(time_t *tloc);
    char *tmpnam(char *s);
    size_t strlen(const char *s);
    void *calloc(size_t num, size_t size);
    void *memmove(void *dest, const void *src, size_t n);
    void *realloc(void *ptr, size_t size);
    double fabs(double x);
    int abs(int n);
    int ifloor(double x);
    int iceil(double x);
    double sqrt(double x);
    char *getenv(const char *name);
    int strcmp(const char *s1, const char *s2);
    int strcasecmp(const char *s1, const char *s2);
    int strncmp(const char *s1, const char *s2, size_t n);
    int strncasecmp(const char *s1, const char *s2, size_t n);
    int toupper(int c);
    int tolower(int c);
    char *strncpy(char *dest, const char *src, size_t n);
    long int strtol(const char *nptr, char **endptr, int base);
    unsigned long int strtoul(const char *nptr, char **endptr, int base);
    char *strcat(char *dest, const char *src);
    char *strsep(char **stringp, const char *delim);
    char *strstr(const char *haystack, const char *needle);
    char *strrchr(const char *s, int c);
    void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));
    char *strcpy(char *dest, const char *src);
    char *stpcpy(char *dest, const char *src);
    char *strchr(const char *s, int c);
    size_t strnlen(const char *s, size_t maxlen);
    size_t strspn(const char *s, const char *accept);
    size_t strcspn(const char *s, const char *reject);
    int memcmp(const void *s1, const void *s2, size_t n);
    void *memchr(const void *s, int c, size_t n);
    int isspace(int c);
    int isalpha(int c);
    int isdigit(int c);
    struct lconv *localeconv();
    int rand();

