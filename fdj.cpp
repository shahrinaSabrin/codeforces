//The Sly Bunny
#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    string str;
    int count = 0,max=0,flag=0;
    cin>>str;
    int len= str.size();

    for(int i=1;i<len;i++){
        if(str[0]==str[i]){
        count=0;
        flag=1;
        }
        else {
            count++;
        }
        if(count>max)
        max=count;

    }
    if(flag)
    cout<<max<<endl;
    else
    cout<<"-1"<<endl;
    }
    

return 0;
}