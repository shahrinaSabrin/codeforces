#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
   
    while(t--){
        int count=2;
        int len;
        cin>>len;
        getchar();
        string str;
        cin>>str;
       for(int i=0;i<str.size();i++)
       {
        for(int j=i+1;j<str.size();j++)
        {
           if(str[j]>str[i]){ 
           char temp=str[j];
           str[j]=str[i];
           str[i]=temp;
           }
        }
       }
       
        for(int j=1;j<str.size();j++)
        {
            if(str[j]==str[j-1])
            count++;

            else
            count+=2;
           

        }
        cout<<count<<endl;
    }
}