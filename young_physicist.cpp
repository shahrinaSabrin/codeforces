#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    int arr[row][3];
    int flag=1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<3;j++)
        {
           cin>>arr[i][j];
        }
    }
    for(int i =0;i<3;i++)
    {
        int sum_of_col=0;
        for(int j=0;j<row;j++)
        {
            sum_of_col+=arr[j][i];
        }
        if(sum_of_col!=0)
        {
            flag=0;
            break;
        }
    }
    if(flag)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}