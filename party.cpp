#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,m,eaten_cake;
        cin>>n>>m;
        if(m%2==1)
            eaten_cake=(m+1)/2;
        else
            eaten_cake=(m)/2;
            int a;
            int arr[n];
            for(int i=0;i<n;i++) 
            {
               cin>>arr[i];
            }
            while(m--)
            {
                int x,y;
                cin>>x>>y;
                for(int i=0;i<n;i++) 
                {
                    for(int j=i+1;j<n;j++)
                    {
                        if(((arr[i]!=x )&&(arr[j]!=y))||((arr[i]!=y )&&(arr[j]!=x)))
                            ;

                    }
                }
            }
            //cout<<eaten_cake<<endl;
    }
}