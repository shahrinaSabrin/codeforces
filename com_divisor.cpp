#include <bits/stdc++.h>
#define max 1000000
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int com_div_count[max+3] ;
int main()
{
    for(int i=0;i<=max;i++)
    {
        for(int j=0;j<=max;j++)
        {
            com_div_count[j]++;
        }
    }
    int t;
    cin>>t; 
    while(t--)
    {
    int a,b;
    cin>>a>>b;
    int n=gcd(a,b);
    cout << com_div_count[n]<<endl;
    }
    return 0;
}