#include <bits/stdc++.h>

using namespace std;



int pre_to_in(string s)
{
    stack<int> st;


reverse(s.begin(),s.end());

 


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
//here x-y  in post = y-x
                        
            if (ch == '+') {
                st.push(x + y);
            } else if (ch == '/') {
                st.push(x / y);
            } else if (ch == '*') {
                st.push(x * y);
            } else if (ch == '-') {
                st.push(x - y);
            } else if (ch == '^') {
                st.push(pow(x, y));
            }

    

                }


    }

return st.top();
}




int main() {
           
cout<<"enter the prefix exprression"<<endl;  string s ; cin>>s;

 int ans = pre_to_in(s);
 
 cout<<ans;

    return 0;
}