//1097B-Petr and a Combination Lock
#include<bits/stdc++.h>
using namespace std;
bool checkBit(int i,int bit)
{
    i=i>>bit;
    return i&1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int flag;
    for(int i=0;i<pow(2,n);i++)
    {
        int angle=0;
        flag=0;
        for(int bit=0;bit<n;bit++)
        {
            if(checkBit(i,bit))
            {
               angle+=arr[bit];
            } 
            else
            {
                angle-=arr[bit];
            }    
        }
        if(angle==0 ||angle%360==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}