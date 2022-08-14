#include<iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int d=k;
    int sum=0;
    while(w--){
        sum+=k;
        k+=d;
    }
    int result= sum-n;
    if(result>0)
    cout<<result<<endl;
    else
    cout<<"0"<<endl;

}