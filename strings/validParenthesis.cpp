#include <bits/stdc++.h>

using namespace std;

string valid(string s)
{
    string res = "";
    stack<char> st;
    for (char c : s)
    {
        if (st.empty())
            st.push(c);
        else
        {
            res += c;
            if (st.top() == '(' && c == ')')
            {
                st.pop();
            }
            else if (st.top() == '{' && c == '}')
            {
                st.pop();
            }
            else if (st.top() == '[' && c == ']')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
    }
}

int main()
{

    string s;
    cout << "Enter a string of parentheses: ";
    cin >> s;
    cout << valid(s);
    return 0;
}