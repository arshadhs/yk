#include<iostream>

// char 1
// short 2
// int / float 4
// double 8

int main()
{
    int i[] = {1,2,3,4};
    int *j;
    j = &i[0];
 
    printf("hello");

    int k = 0;
    while (k < 4)
    { 
        printf("\n j = %u ", *j++);   
        printf("\n i = %d ", i[k]);

        k++;
    }

    return 0;
}