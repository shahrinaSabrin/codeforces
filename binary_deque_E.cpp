//E - Binary Deque(WRONG ON #TESTCASE 2)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,s;
        cin>>n>>s;
        vector<int>vec(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            sum+=vec[i];
        }

        if(sum<s)
        {
            cout<<"-1\n";
        }
        else if(sum==s)
        {
            cout<<"0\n";
        }
        else
        {
            sum=0;
            int temp=0;
            for(int j=0,cnt=0;j<n;j++)
            {
                sum+=vec[j];
                //cout<<"sum "<<j <<" :"<<sum<<"\n";
                if(sum>s)
                {
                    sum-=vec[cnt];
                    cnt++;
                }
                //cout<<cnt<<endl;
                temp=max(temp,(j+1)-cnt);
                //cout<<"sum "<<j <<" :"<<sum<<"\n";
                //cout<<"temp "<<j <<" :"<<temp<<"\n";
                
            }
            cout<<n-temp<<endl;
        }
    }
}