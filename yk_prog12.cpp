#include<iostream>

void display(int *j)
{
    printf(" %u", &j);
}

int main()
{
    int m[] = {1, 2, 3, 4};

    for(int i = 0; i < 4; i++)
        display(&m[i]);      

        return 0;
}

