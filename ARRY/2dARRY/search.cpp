#include <climits>
 #include <iostream>
using namespace std;
 
int main () {
    
  int arr[3][3] ={{1,2,3}, {4,5,6} , {7,8,9}};
  int k = 9;
  int r = 0,c=2;// 3-1
  bool found = false;
  while(r < 3 and c >=0)
  {
   if(arr[r][c] == k) 
      found = true;
    if(arr[r][c] > k)
       c--;
    else
       r++;
  }
if (found == false)
    cout<<"Not found";
else
  cout<<"Found" << endl;

  
   return 0;
}