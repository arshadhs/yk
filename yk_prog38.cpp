#include<iostream>
#include <string.h>

struct account
{
    int rollNo;
    char name[30];
};

int main()
{
    struct account s1[10];
    char name[20];
   struct account *sPtr;
    printf("\nEnter details: ");
    //scanf("%d", a);
    scanf("%s", name);

    for (int i = 0; i < 10; i++)
    {
        s1[i].rollNo = i+1;
        strcpy(s1[i].name, name);
        strcat(s1[i].name, " Siddiqui");
        printf("\nRoll: %d", s1[i].rollNo);
        printf(" Name: %s", s1[i].name);
        printf("\t sizeof s1[%d]: %u", i, sizeof(s1[i]));


    }
    
    sPtr = &s1[0];
    printf("\nsizeof %u", sizeof(s1));
    printf("\nRoll: %d", sPtr->rollNo);
    printf(" Name: %s", sPtr->name);

    return 0;
}