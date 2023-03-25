#include <stdio.h>
int main()
{
    int size, i;
    printf("Enter the size of arr :- ");
    scanf("%d", &size);

    int a[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter the no. :-");
        scanf("%d", &a[i]);
    }

    int max[size] = a[0];
    for (i = 0; i < size; i++)
    {
         
            if (a[i] > max)
            {
                max[i] = a[i];
            }
       
        printf("%d \t ",max);
    }

    return 0;
}