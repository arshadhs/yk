#include<iostream>

// char 1
// short 2
// int / float 4
// double 8

int main()
{
    int i = 3, *x;
    float j = 4.5, *y;
    char k = 'a', *z;

    printf("hello");
    printf("\n i = %d - %d", i, sizeof(i));
    printf("\n j = %f - %d", j, sizeof(j));
    printf("\n k = %c - %d", k, sizeof(k));

    x = &i;
    y = &j;
    z = &k;

    printf("\n x = %u - %d", x, sizeof(x));
    printf("\n y = %u - %d", y, sizeof(y));
    printf("\n z = %u - %d", z, sizeof(z));

    x++;
    y++;
    z++;

    printf("\n x = %u", x);
    printf("\n y = %u", y);
    printf("\n z = %u", z);

    return 0;
}
