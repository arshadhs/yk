#include<iostream>

int main()
{
    const char *names[4] =
        {"Rayyan",
        "Alina",
        "Arshad",
        "Nusrat"
        };

        int i = 0;

        for(i = 0; i <= 3; i++)
            printf("\n%u, - %s", &names[i], names[i]);

        const char *temp;          
        temp = names[1];
        names[1] = names[2];
        names[2] = temp;

        for(i = 0; i <= 3; i++)
            printf("\n%u, - %s", &names[i], names[i]);

    return 0;
}