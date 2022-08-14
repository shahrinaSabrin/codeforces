//unsoleved!
#include<iostream>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int arr[n];
    long long int unit=-1,temp=0;
    for(long long int i=0;i<m;i++)
    {
        cin>>arr[i];
        if(arr[i]<temp)
        unit+= n-temp+arr[i];
        else
        unit+=arr[i]-temp;
        temp=arr[i];
        
    }
    cout<<unit<<endl;
}