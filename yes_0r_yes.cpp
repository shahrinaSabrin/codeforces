#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string str;
        string str2= "YES";

        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            str[i]=toupper(str[i]);
        }
        if(str==str2)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}