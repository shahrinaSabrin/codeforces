#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,max=0,max_idx;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>max)
            {
                max=arr[i];
                max_idx=i;
            }

        }
        int flag=1;
        for(int i=0;i<n-1;i++)
        {
            if(i<max_idx)
            {
                if(arr[i]>arr[i+1])
                {
                    flag=0;
                    break;
                }

            }
            else
            {
               if(arr[i]<arr[i+1])
                {
                    flag=0;
                    break;
                } 
            }
            
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}