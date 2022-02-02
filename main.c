#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int array[100], n, min, i;

    printf("How many Number you want to Input? = ");
    scanf("%d", &n);
    printf("Please Enter the Values : ");

    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    min=array[0];

    for(i=1; i<n; i++)
    {
        if(min>array[i])
        {
            min=array[i];
        }
    }

    printf("Minimum Number is = %d", min);




    getch();
    return 0;
}
