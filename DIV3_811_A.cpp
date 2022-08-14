#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,h,m,result;
        cin>>n>>h>>m;
        int sleep = h*60 + m;
        int temp = 1440;
        for(int i=0;i<n;i++)
        {
            cin>>h>>m;
            int alarm=h*60+m;
            result = alarm-sleep;
            if(result<0)
            {
                result+=1440;
            }
            if(result<temp)
                temp=result;
                cout<<temp<<" ";
        }
        h=temp/60;
        m=temp%60;
        cout<<h<<" "<<m<<endl;
    }
    return 0;
}