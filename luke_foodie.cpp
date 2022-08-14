#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int left=arr[0];
        int right = arr[0],cnt=0;
        for(int i=0;i<n;i++)
        {
            if(left>arr[i])
            {
                left=arr[i];
            }
            if(right<arr[i])
            {
                right=arr[i];
            }
            if((abs(right-left))>2*x)
            {
                cnt++;
                left=arr[i];
                right=arr[i];
            }
            
        }
       
        cout<<cnt<<endl;
    }
}