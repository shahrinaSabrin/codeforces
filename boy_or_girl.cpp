#include<iostream> 
#include<cstring> 
using namespace std;  
int main ()  
{    
       
    string str;   
   
    cin>>str; 
    int len=str.size();  
    for(int k=0; k<str.size(); k++)   
    {  
     
        for(int j=k+1; j<str.size(); j++)
        {
            if(str[j] <str[k])
            {
                int temp = str[k];
                str[k] = str[j];
                str[j] = temp;
            }
        }
    
    }  
    for(int i=1;i<str.size();i++)  
    {  
       if(str[i]==str[i-1])
        len--;
    } 
  if(len%2==1)
  cout<<"IGNORE HIM!"<<endl;
  else
  cout<<"CHAT WITH HER!"<<endl;

}