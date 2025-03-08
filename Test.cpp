#include <bits/stdc++.h>
#define need_speed ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void)
{
    need_speed;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        bool isBalanced = true;  
        for (auto x : s)
        {
            if (x == '{' || x == '(' || x == '[')
                st.push(x);  
            else if (x == '}' || x == ')' || x == ']')
            {
                if (st.empty()) 
                {
                    isBalanced = false;  
                    break;
                }
                if (x == ')' && st.top() == '(')
                    st.pop(); 
                else if (x == '}' && st.top() == '{')
                    st.pop(); 
                else if (x == ']' && st.top() == '[')
                    st.pop(); 
                else
                {
                    isBalanced = false;  
                    break;
                }
            }
        }
        if (!st.empty()) isBalanced = false;
        cout << (isBalanced ? "Balanced" : "Not Balanced") << endl;
    }
}
