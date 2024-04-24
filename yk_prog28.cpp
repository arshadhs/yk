///
/// Ch 3. Strings
/// Pring string elements using pointers
///

#include<iostream>

int main()
{
    char name[]="India";
    char *ptr = name;
  
    while (*ptr)    
        printf("\t %c", *ptr++);

    return 0;
}