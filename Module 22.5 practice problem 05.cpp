#include<bits/stdc++.h>
//Using Stack Infix to postfix Transfer
using namespace std;
int prec(char ch)
{
    if(ch=='+' || ch=='-')
    {
        return 0;
    }
    //* or /vag hove
    return 1;
}
int main()
{
string s;
cin>>s;
stack<char>st;
string ans ="";

for(int i=0;i<s.size();i++)//string ta scan korci
{
    char now =s[i];
    if(now >='a' && now <= 'z')
    {
        ans+=now;
    }
    else
    {
        while(st.size() && prec(st.top()) >=prec(now))
        {
            ans+=st.top();
            st.pop();
        }
        st.push(now);
    }
}
while(st.size())
{
    ans+=st.top();
    st.pop();
}
cout<<ans<<"\n";
return 0;

}





