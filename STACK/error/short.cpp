#include <stack>
 #include <iostream>
using namespace std;
void enter( stack<int> s,int num)
{
    if(s.empty() ||(!s.empty() && (s.top() < num))  ) 
    {
        s.push(num);
        return;
    }

    int n = s.top();
    s.pop();

    enter(s,num);

    s.push(n);

}
void shortS( stack<int> &s)
{
    if(s.empty())
    return;

    int num = s.top();
    s.pop();

    shortS(s);

    enter(s,num);
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
    shortS(s);

     while (!s.empty())
 {
    int ans = s.top();
    cout << ans<<endl;
    s.pop();
 }
 
 
   return 0;
}