///
/// Ch 3. Strings
///

#include<iostream>

int main()
{
    char name[]="India";
    int i = 0;

    while (name[i])    
    {
        printf("\n %c %c %c %c", name[i], *(name+i), *(i + name), i[name]);
        i++;
    }

    return 0;
}