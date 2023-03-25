#include <climits>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  int i, n1, n2, k;
  cout << "Enter the size of 1st arr" << endl;
  cin >> n1;
  cout << "Enter the size of 2nd arr" << endl;
  cin >> n2;
  int arr1[n1], arr2[n2], arr3[n1 + n2];
  for (i = 0; i < n1; i++)
  {
    cout << "Enter the no. for 1st " << endl;
    cin >> arr1[i];
  }
  for (i = 0; i < n1; i++)
  {
    cout <<  "Enter the no. 2nd " << endl;
    cin >> arr2[i];
  }
  if (n1 >= n2)
    k = n1;
  else
    k = n2;

  for (i = 0; i <  ; i++)
  {
    for (int j = 0; j < k; j++)
    {
      if (arr1[j] == arr2[j])
      {
        arr3[j] = arr1[j];
      }
    }
  }
  for (i = 0; i < k; i++)
  {
    cout << endl << arr3[i] << endl;
  }

  return 0;
}