#include<iostream>
#include <cassert>

int x_strlen(char *s)
{
    assert(s != NULL);

    int i = 0;
    while (*s++ != '\0') i++;

    return i;
}

int main()
{
    char name[25];

    printf("\nEnter the name:");
    scanf("%s", name);
    printf("Name: %s", name);

    int len = x_strlen(name);
    printf("\nlen = %d", len);
    return 0;
}