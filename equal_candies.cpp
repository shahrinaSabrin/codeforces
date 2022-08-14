//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    int t,box, num,  ans1;
    long long int mini;
    cin>>t;
    while(t--){
          mini = 1000000000;   ans1 = 0;
        cin>>box;
        int ch[10];
        for(int i=0; i<box; i++){
            cin>>num;
            ch[i] = num;
            if(num<mini) mini = num;
        }
       for(int j=0; j<box; j++){
        if(ch[j]>mini){
            ans1 = ans1 + ch[j] - mini;
 
        }
       }
      cout<<ans1<<"\n";
    }
    return 0;
}