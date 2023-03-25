#include <stdio.h>
#include <string.h>
int shore(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    return arr;
}
 void kth(int *arr, int k, int n)
{
    int b[n];
    int j, i;
    shore(arr, n);
    int ans = arr[k + 1];
    printf("\nYour answer is : %d", ans);
    
}

int main()
{
    int i, n, k;
    printf("\nEnter the size : ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the possession : ");
    scanf("%d", &k);
    for (i = 0; i < n; i++)
    {
        printf("Enter the size : ");
        scanf("%d", &arr[i]);
    }
    kth(arr, k, n);

    return 0;
}