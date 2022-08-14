#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string str;
	cin>>str;
     char ch;
	for(int i=0;i<str.size();i++){
        if(i==0){
	   ch=toupper(str[i]);
         cout << ch;
        }
        else{
            ch=str[i];
            cout << ch;
        }
    }
    cout<<endl;
	
	return 0;
}