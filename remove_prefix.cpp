#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin>>test;
    while(test--)
    {
        int n,pos=-1;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)
        {
          cin>>vec[i];
        }
        unordered_map<int,int>mp;
         for(int i=n-1;i>=0;i--)
        {
          /*if(mp.count(vec[i]))
          {
            if(pos<m[])
            pos=mp[vec[i]];
            break;
          }*/
        }
        cout<<pos+1<<"\n";
        /*
        //sort(vec.begin(),vec.end());
        vector<int>v;
        vector<int>::iterator itr;
        for(int i=n-1;i>=0;i--)
        {
           itr = find (v.begin(), v.end(),vec[i]);
           pos=itr-v.begin();
           if(itr!=v.end())
           {
            break;
           }
           else
           {
            v.push_back(vec[i]);
           }
        }

        int result= vec.size()-v.size();
        cout<<result<<"\n";
        */
    }
}