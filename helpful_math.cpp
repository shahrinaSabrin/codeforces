#include<iostream> 
#include<cstring> 
using namespace std;  
int main ()  
{    
       
    string str;   
   
    cin>>str; 
    int len=str.size();  
    for(int k=0; k<str.size(); k+=2)   
    {  
     
        for(int j=k+2; j<str.size(); j+=2)
        {
            if(str[j] <str[k])
            {
                int temp = str[k];
                str[k] = str[j];
                str[j] = temp;
            }
        }
    
    }  
     
    cout<<str<<endl;
  
}