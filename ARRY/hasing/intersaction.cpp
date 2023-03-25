#include <set>
#include <unordered_set>
 #include <iostream>
using namespace std;
int main () {
  int a[] = { 0, 1, 2, 3};
  int b[] =  { 1,2, 112,   3};
  int c=0;
  set<int> st;
   for(int e : a)
   {
    st.insert(e);
   }
   for(int e : b)
   {
    if(st.find(e) !=st.end())
    {
        c++;
        st.erase(e);
    }
   }


   cout<<c<<endl;

   return 0;
}