#include <climits>
#include <iostream>
using namespace std;
int search(int a[], int f, int l, int key)
{
    int s = f;
    int e = l;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (a[mid] == key)   {  return mid;  }
        if (a[mid] > key)   {  e = mid - 1;  }
        else   {   s = mid + 1;  }
        mid = s + e / 2;
    }
    return -1;
}

int pivot(int *arr, int n)
{
    int s, e, mid;
    s = arr[0];
    e = n - 1;
    mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] > arr[0])   {  s = mid + 1; }
        else                      {   e = mid; }
    }
    mid = s + (e - s) / 2;

    return s;
}

int main()
{
    int n, i;
    cout << "Enter the size : ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter the no. : ";
        cin >> arr[i];
    }
    int k;
    cout << "Enter the search no. =  ";
    cin >> k;
    int pivot1 = pivot(arr, n);
    if (k > arr[pivot1] && k < arr[n - 1])
    {
        cout << search(arr, pivot1, n - 1, k);
    }
    else
    {
        cout << search(arr, 0, pivot1 - 1, k);
    }

    return 0;
}