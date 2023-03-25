#include <unordered_set>
 #include <iostream>
using namespace std;
int main () {
  int a[] = { 0, 1, 2, 3};
  int b[] =  { 12,31, 2, 3};
  unordered_set<int> set;
   for(int e : a)
   {
    set.insert(e);
   }
   for(int e : b)
   {
    set.insert(e);
   }

   cout<<set.size()<<endl;

   return 0;
}