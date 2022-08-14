#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int upper_case=0,lower_case=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        lower_case++;

         if(str[i]>='A' && str[i]<='Z')
        upper_case++;
    }
    if(lower_case>=upper_case)
    {
        for(int i=0;i<str.size();i++)
        {
            str[i]=tolower(str[i]);
            cout<<str[i];
        }
        cout<<endl;
    }
    else
    {
        for(int i=0;i<str.size();i++)
        {
            str[i]=toupper(str[i]);
            cout<<str[i];
        }
        cout<<endl;
    }
}