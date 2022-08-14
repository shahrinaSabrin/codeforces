#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string str;
	cin>>str;
     int count;
	for(int i=0;i<str.size();i++){
        count=0;
       for(int j=0;j<str.size();j++){
           if(str[i]==str[j]){
               count++;
           }
          // if()
       }
    }
    cout<<endl;
	
	return 0;
}