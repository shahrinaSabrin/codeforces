//SOLVED!
#include<stdio.h>
int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        int num,i,k;
        scanf("%d",&num);
        int count=1;
      
       for( i=1,k=0;count<=num;i++){
           int n=i;
           
       
           if((i%10!=3)&&(i%3!=0)){
               count++;
            
            
           }
           k++;
         
       }
       printf("%d\n",k);
    
    }
    return 0;
}