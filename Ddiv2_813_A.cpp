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
		//cout<<n;
        int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=k;i<n;i++)
		{
			if(arr[i]<=k)
			cnt++;
		}
		cout<<cnt<<endl;
        
    }
}