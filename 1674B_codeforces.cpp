#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="abcdefghijklmnopqrstuvwxyz";
    int test,idx;
    cin>>test;
    while(test--)
    {
        idx=0;
        string input;
        cin>>input;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<str.size();j++)
            {
                if(i==0)
                {
                    if(input[i]==str[j])
                    {
                        idx=j*25;
                    }
                }
                else if(i==1)
                {
                   if(input[i]==str[j])
                    {
                       if(input[i]>input[0])
                       {
                        idx+=j;
                       }
                       else
                       {
                        idx+=j+1;
                       }
                    } 
                }
            }

        }
        cout<<idx<<endl;
    }
}
        
