#include <climits>
 #include <iostream>
 #include <stack>
using namespace std;
void remove(stack<int>s,int count,int size)
{
    if(count == size/2)
    {
        s.pop();
        return;
    }

    int ans = s.top;
    s.pop();

    remove(s,count+1,size);

    s.push(ans);
}
int main () {
    stack<int>s;
    s.push(34);
    s.push(12);
    s.push(19);
    s.push(30);

  int count = 0;
  remove( s,count,4);
   return 0;
}