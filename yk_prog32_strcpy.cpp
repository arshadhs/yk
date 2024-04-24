#include<iostream>
#include <cassert>

//extern 'c' char* x_strcpy(register char *dst, register const char* src)
char* x_strcpy(char *dst, const char* src)
{
    assert(src != NULL);
    char *ret = dst;

//    while (*dst != '\0') dst++;

    while(*src != '\0') { *dst++ = *src++;}
    printf("\nafter = %s", ret);
    return ret;
}

int main()
{
    char src[20] = "Source";
    char dest[20] = "Destination";

    printf("\nName: %s", src);
    printf("\nName: %s", dest);

   char *after = x_strcpy(dest, src);
    printf("\nafter = %s", after);
    return 0;
}