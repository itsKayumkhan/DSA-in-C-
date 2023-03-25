#include <climits>
#include <iostream>
using namespace std;
int pivot(int *arr, int n)
{
    int s, e, mid;
    s = arr[0];
    e = n - 1;
    mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }    mid = s + (e - s) / 2;

    return s;
}

int main()
{
    int n, i;
    cout << "Enter the size : ";
    cin >> n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cout<<"Enter the no. : ";
        cin>>arr[i];
    }
    
    cout<<" Your pivot is : "<< pivot(arr, n);

    return 0;
}