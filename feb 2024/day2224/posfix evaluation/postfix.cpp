#include <bits/stdc++.h>

using namespace std;



int post_to_in(string s)
{
    stack<int> st;

    int res;


    for(char ch:s)
    {
            if(isalnum(ch))
            {
                    st.push(ch-'0');
            }

            else if(ch == '+'||ch == '/'||ch == '*'||ch == '-'||ch == '^' )
                {
                    
                    int x = st.top(); st.pop();
                    int y = st.top(); st.pop();

                        
            if (ch == '+') {
                st.push(x + y);
            } else if (ch == '/') {
                st.push(y / x);
            } else if (ch == '*') {
                st.push(x * y);
            } else if (ch == '-') {
                st.push(y - x);
            } else if (ch == '^') {
                st.push(pow(y, x));
            }

    

                }


    }

return st.top();
}




int main() {
           
cout<<"enter the postfix exprression"<<endl;  string s ; cin>>s;

 int ans = post_to_in(s);
 
 cout<<ans;

    return 0;
}