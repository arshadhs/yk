#include<iostream>
#include <cassert>
#include <string.h>

int x_strcmp(char *s1, const char* s2)
{
    assert(s1 != NULL && s2 != NULL);  

    //while(*s1 != '\0') s1++;

    while(*s1 == *s2)
    {
        if (*s1 == '\0') return 0;
        s1++; s2++;
    }

    return *s1-*s2;    
}

int main()
{
    char s1[20] = "Saurce.....";
    char s2[20] = "Source...";

    printf("\nName: %s", s1);
    printf("\nName: %s", s2);

    int i = strcmp(s1, s2);
    printf("\nstrcmp = %d", i);

    int j = x_strcmp(s1, s2);
    printf("\nx_strcmp = %d", j);
    return 0;
}