#include <climits>
 #include <iostream>
using namespace std;
int kadane(int arr[],int n)
{
    int maxSum = INT_MIN;
  
  int cur=0;
  for (int i = 0; i < n; i++)
  {
    cur += arr[i];
    if(cur < 0)
    cur =0;

    maxSum = max(maxSum,cur);
  }
  return maxSum;
  
}
int main () {
    int n ;
    cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  //normal
  //cout <<kadane(arr,n);
  // fro circular max sum of sub array
  int non_warp = kadane(arr,n);
  int wrap,tot =0,maxSum=INT_MIN;
  for (int i = 0; i < n; i++)
  {
    tot += arr[i];
    arr[i] =-arr[i];
     
  }
  wrap = tot +kadane(arr,n);

  maxSum = max(wrap,non_warp);

  cout<<"max sum: "<<maxSum<<endl;
  
   return 0;
}