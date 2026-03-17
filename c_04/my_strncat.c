#include <stdio.h>

char *my_strncat(char *dest, const char *src, size_t n) {
    char *ptr = dest;

    while (*ptr != '\0') {
        ptr++;
    }

    size_t i = 0;
    while (i < n && src[i] != '\0') {
        ptr[i] = src[i];
        i++;
    }

    ptr[i] = '\0';

    return dest;
}

