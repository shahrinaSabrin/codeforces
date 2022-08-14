#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        string st;
        vector<string> str(n);
        for(int i=0;i<n;i++)
        {
            cin>>str[i];
            st+=str[i];
        }
        int flag=1,cnt=1;
        sort(st.begin(),st.end());
        for(int i=1;i<st.size();i++)
        {
            
           if(st[i]==st[i-1])
            {
                cnt++;
            }
            else if((st[i]!=st[i-1])||i==st.size())
            {
                int temp=cnt;
                    cnt=1;
                if(temp%n)
                {
                    flag=0;
                    break;
                }
                
            }
           
            //cout<<cnt;
        }
        if(cnt%n)
        flag=0;
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}