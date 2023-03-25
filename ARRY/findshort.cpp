#include <climits>
 #include <iostream>
using namespace std;
int find(int arr[] ,int n)
{
    if(n==1)
    return true;

    bool shorts = find(arr+1 ,n-1);
    return (shorts and (arr[0] < arr[1]));
}
int main () {
    int n =5;
    // cin>>n;
  int arr[n] ={1,3,5,17,9};
 cout<< find(arr,n);
   return 0;
}