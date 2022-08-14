#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int num;
        cin>>num;
        int n=num;
        int sum=0;
        vector<int>result;
        for(int i=9;i>=1;i--)
        {
           if(sum==num)
           break;

           if(n>=i)
           {
            sum+=i;
            n-=i;
            result.push_back(i);
           }
        }
        for(int i= result.size()-1;i>=0;i--)
        {
            cout<<result[i];
        }
        cout<<endl;
    }
    return 0;
}