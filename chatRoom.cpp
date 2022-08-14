#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    string str2="hello";
    cin>>str;
    int flag=0;
    for(int i=0,j=0;i<str.size();i++)
    {
        if(str[i]==str2[j])
        {
            j++;
        }
        if(j>=str2.size())
        {
            flag=1;
            break;
        }
    }
    if(flag)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}