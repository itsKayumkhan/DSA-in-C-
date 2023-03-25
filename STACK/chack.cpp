bool match(char top  , char ch)
{
    if(top == "(" and ch 
==")" ||top == "[" and ch =="]" || top == "{" and ch =="}" )
{
    return true;
}
else 
{
    return false;
}
}

void check(string c)
{
    for (int i = 0; i < c.length; i++)
    {
        stack<char> s;
        char ch = c[i];

        if (ch == "(" || ch == "{" || ch == "[")
        {
            s.push(ch);
        }
        else
        {
            if (!s.empty())
            {
                char top = s.top();

                if (match(top, ch))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
