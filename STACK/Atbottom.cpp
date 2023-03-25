
#include <stack>
#include <iostream>
using namespace std;
void AtBottom(stack<int> &s, int d)
{
    if (s.empty())
    { 
        s.push(d);
        // int an = s.top();
        // cout<<an<<endl;
        return;
    }

    int n = s.top();
     s.pop();
    AtBottom(s,d);
    
   s.push(n);
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
 AtBottom(s,2);
 while (!s.empty())
 {
    int ans = s.top();
    cout << ans<<endl;
    s.pop();
 }
 

}