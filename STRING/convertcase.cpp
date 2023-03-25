#include <string>
 #include <iostream>
using namespace std;
int main () {
    // convert to upper case
  string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  
//    for (int i = 0; i < a.size(); i++)
//    {
//     if(a[i] >= 'a' && a[i] <= 'z')
//        a[i] -= 32;
//    }
//    cout<<a<<endl;

   //convert to lower case

     
   for (int i = 0; i < a.size(); i++)
   {
    if(a[i] >= 'A' && a[i] <= 'Z')
       a[i] += 32;
   }
   cout<<a;
   
   return 0;
}