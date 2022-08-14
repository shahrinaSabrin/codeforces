#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        cout<<n<<endl;
        int l=n;
        int arr[n];
        for(int i=1,j=0;i<=n;i++,j++)
            {
                arr[j]=i;
                
            }
            int i=0,k=n-1;
        while(l--)
        {

            
            for(int j=0;j<n;j++)
            {
                cout<<arr[j]<<" ";
                
            }
            cout<<endl;
            swap(arr[i],arr[k]);
            i++;
            //cout<<i<<endl;
            //k--;
        }
        

    }
    return 0;
}