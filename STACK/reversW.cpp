#include <stack>
 #include <iostream>
 #include<string>
using namespace std;
void revers(string s)
{
    stack <string> st;
    for (int i = 0; i < s.length(); i++)
    {   string word ="";
        while(s[i] != ' ' and i<s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);

    }
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
    
    
}
int main () {
 string s = "hi , i am kayum";


  revers(s);
   return 0;
}