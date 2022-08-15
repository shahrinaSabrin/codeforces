#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int move[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>move[i];
        }

        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
           
            getchar();
            string str;
            cin>>str;
            for(int j=0;j<str.size();j++)
            {
                if(str[j]=='D')
                move[i]++;
                
                else
                move[i]--;
            }
             if(move[i]<0)
             move[i]+=10;

             else if(move[i]>9)
             move[i]-=10;

             cout<<move[i]<<" ";

        }
        
        cout<<endl;
    }
}