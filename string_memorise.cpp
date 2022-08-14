//try later
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int test,day;
    cin>>test;
    while(test--)
    {
        string str;
        cin>>str;
        set<char>str1;
        for(int i=0;i<str.size();i++)
        {
            str1.insert(str[i]);
        }
        if(str1.size()%3)
            day=(str1.size()/3)+1;
        else
            day=(str1.size()/3);

        cout<<day<<endl;
        
    }
    return 0;
}