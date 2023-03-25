#include <climits>
#include <iostream>
using namespace std;
   double more(int n, int mor , int temp){
    double fac = 1;
    double ans = temp;
    for (int i = 0; i < mor; i++)
    {
        fac = fac/10;
        for (double j = ans; j *j< n; j += fac)
        {
            ans = j;
        }
        
    }
    return ans;
    
   }
int search( int  n ){
    int s = 0;
    int e =  n ;
    int mid =  s+(e-s)/2;
    
    float ans = -1;
    while (s<=e)
    {  int sq = mid *mid;
         if (sq == n)
         {
             return mid;
         }
         if ( sq < n)
         {  ans = mid;
             s = mid +1;
         }
         else
         {
          
             e = mid - 1;
         }
              mid =  s+(e-s)/2;
 }
    return ans;
 }


int main () {
    int n;
    cout<<"Enter the no. : " ;
    cin>>n;
    int temp = search(n);

    cout<<"You ans is  = "<<more(n,3,temp);
   
   return 0;
}