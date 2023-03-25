 #include <iostream>
using namespace std;
int main () {
  int n = 10;

  int arr[] = {1,2,3,4,6,7,5,8,9};
  int tot = n * (n+1)/2;

  for (int i = 0; i < n-1; i++)
  {
    tot -= arr[i];
  }
  cout<<tot<<" ";
   return 0;
}