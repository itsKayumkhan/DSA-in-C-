#include <stack>
#include <iostream>
using namespace std;
void AtBottom(stack<int> &s, int d)
{
    if (s.empty())
    { 
        s.push(d);
        return;
    }

    int n = s.top();
     s.pop();
    AtBottom(s,d);
    
   s.push(n);
}

void revers(stack<int> &s)
{
    if (s.empty())
        return;

    int num = s.top();
    s.pop();

    revers(s);

    AtBottom(s,num);
}

int main()
{
    stack<int> s;
    s.push(12);
    s.push(1);
    s.push(62);
    s.push(22);
    s.push(18);
    s.push(13);
 AtBottom(s,23);

    while (!s.empty())
 {
    int ans = s.top();
    cout << ans<<endl;
    s.pop();
 }
  revers(s);
      

    return 0;
}