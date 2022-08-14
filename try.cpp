#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,k,cnt=0;
        cin>>n>>k;
        vector<int>v(n);
        vector<int>::iterator itr;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(n>k)
        {
            int idx=0;
            while(idx<k)
            {
                itr=find(v.begin(),v.end(),idx+1);
                int p=itr-v.begin();
                //cout<<"p :"<<p<<endl<<idx<<endl;
                if(p!=idx)
                {
                    swap(v[idx],v[p]);
                    cnt++;
                }
                idx++;
            }
        }
        cout<<cnt<<endl;
        
    }
}