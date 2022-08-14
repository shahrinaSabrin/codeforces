#include<iostream>
using namespace std;
int grid(int m,int n)
{
    if(m==1 || n==1)
    return 1;

    else
    return grid(m,n-1) + grid(m-1,n);
}
int main()
{
    int m,n;
    cin>>m>>n;
    int x=grid(m,n);
    cout<<x<<endl;
    return 0;
}