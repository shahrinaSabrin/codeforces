#include <bits/stdc++.h>
using namespace std;
 
int main()
{
        int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int s; cin>>s;
        vector<int> v(n);
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1)
                cnt++;
        }
        if(s>cnt){
            cout<<-1<<endl;
            continue;
        }  
        if(s==cnt){
            cout<<0<<endl;
            continue;
        }
        int j=0,i=0;
        int sum=0;
        int w=0;
        while(j<n){
            sum+=v[j];
            while(sum>s){
                sum-=v[i++];
            }
            w=max(w,j-i+1);
            j++;
        }
        cout<<n-w<<endl;
    }
    return 0;
}