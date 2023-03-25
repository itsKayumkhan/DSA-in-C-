#include <climits>
#include <iostream>
#include <stack>
using namespace std;
int main()
{

    string n = "kayum";
    stack<char> s;

    for (int i = 0; i < n.length(); i++)
    {
        char ch = n[i];
        s.push(ch);
    }

    string a = "";

    while (!s.empty())
    {
        char ans = s.top();
        a.push_back(ans);
        s.pop();
    }
    cout << a;

    return 0;
}