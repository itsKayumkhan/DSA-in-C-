#include <stdio.h>
int pos1(int a[] ,int size , int key ){
    int s = 0, e = size -1 ;
   int mid = s +(e-s)/2;
   int ans ;
    while (s<=e)
    {
      if(a[mid] == key ){
        ans = a[mid];
         e = mid-1;
        

      }else if (a[mid] > key){
        e = mid -1 ;

      } 
      else if (a[mid]< key)
      {
        s = mid +1 ;

      } 
      mid = s+e/2;
      return ans;
    }
    
}
 int pos2(int a[] ,int size , int key ){
    int s = 0, e = size -1 ;
   int mid = s +(e-s)/2;
   int ans ;
    while (s<=e)
    {
      if(a[mid] == key ){
        ans = a[mid];
     
        

      }else if (a[mid] > key){
        e = mid -1 ;

      } 
      else if (a[mid]< key)
      {
        s = mid +1 ;

      } 
      mid = s+e/2;
      return ans;
    }
    
} int main () {
  int a[6]= {10,20,40,60,80,90};
  int b[6]={10,30,40,60,70,90};
 int tot = pos1(a,6,40);
 int tot1 =pos2(b,6,40);
   return 0;
}