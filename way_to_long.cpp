#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        char a,b;
        int c=0;
        	string str;
	        cin>>str;
    int l= str.size();
    if(l<=10){
        for(int i=0;i<str.size();i++){
	   cout<<str[i];
         }
         cout<<endl;
    }
    else{
	for(int i=0;i<str.size();i++){
	   if(i==0)
       a=str[i];
      else if(i==(str.size()-1))
       b= str[i];
       else{
           c++;

       }

	}
    cout<<a<<c<<b<<endl;
    }
    }

}