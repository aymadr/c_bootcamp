#include <stdio.h>

char *my_strrchr(const char *s, int c){
        int i=0;

     while (s[i] != '\0') {
        i++;
    }

    while (i >= 0) {
        if (s[i] == (char)c) {
            return (char *)&s[i];
        }
        i--;
    }
    return NULL;
}