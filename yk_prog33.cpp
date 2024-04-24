#include<iostream>
#include<string.h>

int main()
{
    char students[10][20] =
        {"Rayyan",
        "Alina",
        "Arshad",
        "Nusrat"
        };

    char name[50];
    printf("\nEnter name:");
         fflush (stdout);
    scanf("%s", name);

    int found;
    int i = 0;
    for (; i <= 10; i++)
    {
        found = strcmp(students[i], name);
        if (found == 0)
            break;
    }

    if (found == 0)
        printf("\nFound! %d", i);
    else
        printf("\nNot Found! %d", i);

    return 0;
}