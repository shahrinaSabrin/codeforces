//#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--)
   {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int x; string s;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        cin>>s;
         ans=a[i];
         for(int j=0; j<x; j++)
         {
             if(s[j] =='D')
             {
                if(ans==9) ans=0;
                else ans++;
             }
             if(s[j] =='U')
             {
                if(ans==0) ans=9;
                else ans--;
             }
         }
         cout<<ans<<" ";
    }
    cout<<"\n";
   }
    return 0;
}