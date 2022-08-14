//UNSOLVED!
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int flag,count=0,n_count=0;;
    while(n!=0){
        
        if((n%10==4)||(n%10==7)){
            flag=1;
            count++;
        }
        else{
            flag=0;
          n_count++;

        }
        n/=10;
    }
        
        if((count>n_count)&&(count>1)){
        printf("YES\n");
        }
        else{
        printf("NO\n");}
        
        
    
    return 0;
}