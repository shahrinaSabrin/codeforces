//SOLVED!
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
       scanf("%d",&n);
       if(n>=1900){
           printf("Division 1\n");
       }

       if((n<=1899)&&(n>=1600)){
           printf("Division 2\n");
       }
       if((n<=1599)&&(n>=1400)){
           printf("Division 3\n");
       }
       if(n<=1399){
           printf("Division 4\n");
       }
        
    }
    return 0;
}