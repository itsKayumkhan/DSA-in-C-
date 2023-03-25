#include <stack>
#include <string>
#include <iostream>
using namespace std;
void redundant(string st)
{
    stack<char> s;
    bool ans = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (st[i] == '+' or st[i] == '-' or st[i] == '*' or st[i] == '/')
        {
            s.push(st[i]);
        }
        else if (st[i] == '(')
        {
            s.push(st[i]);
        }
        else if (st[i] == ')')
        {
            if (s.top() == '(')
            {
                ans = true;
            }
            while (s.top() == '+' or s.top() == '-' or s.top() == '*' or s.top() == '/')
            {
                s.pop();
            }
            s.pop();
        }
    }
    cout << ans ;
}

int main()
{
    string st = "((a+b))";

    redundant(st);
    return 0;
}