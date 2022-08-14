#include<iostream>

using namespace std;

int main(){
    string str;
    int count = 1;
    cin>>str;
    int len= str.size();
    if(len<7){
    cout<<"NO"<<endl;
    return 0;
    }
    else{
    for(int k=1; k<=str.size(); k++){
        if(str[k] == str[k-1]){
            count++;
            if(count==7){
                cout<<"YES"<<endl;
                return 0;
            }
        }else{
            count=1;
        }
        
    }
    cout<<"NO"<<endl;
    return 0;
}
}