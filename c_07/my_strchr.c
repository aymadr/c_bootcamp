#include <stdio.h>

char *my_strchr(const char *s, int c){
    int i=0;

    while(s[i] != c && s[i]!='\0'){
        i++;
    }

    if (s[i] == (char)c) {
        return (char *)&s[i];
    }

    return NULL;
}