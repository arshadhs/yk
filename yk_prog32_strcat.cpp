#include<iostream>
#include <cassert>

char* x_strcat(char *dst, const char* src)
{
    assert(src != NULL);
    char *ret = dst;

    while(*dst != '\0') dst++;

    while(*src != '\0')
    {
        *dst = *src;
        dst++; src++;
    }

    printf("\nafter = %s", ret);
    return ret;
}

int main()
{
    char src[20] = "Source";
    char dest[20] = "Destination";

    printf("\nName: %s", src);
    printf("\nName: %s", dest);

    char *after = x_strcat(dest, src);
    printf("\nafter = %s", after);
    return 0;
}