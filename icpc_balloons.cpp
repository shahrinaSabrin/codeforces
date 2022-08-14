#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        char a[n];
        char b;
        map<char,int>m;
 
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            b=a[i];
            m[b]++;
        }
        int ans=0;
        for(auto it=m.begin(); it!=m.end(); it++)
        {
             //cout<<it->first<<" "<<it->second<<endl;
            ans+=it->second+1;
        }
        cout<<ans<<endl;
 
    }
    return 0;
}