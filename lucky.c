//SOLVED!
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n; 
        scanf("%d",&n);
        int sum1=0,sum2=0,i=0;
        while(n!=0){
            if(i<3){
                sum1+=n%10;
            }
            else{
            sum2+=n%10;
            }
            n/=10;
            i++;

        }
        
        if(sum1==sum2){
        printf("YES\n");
        }
        else{
        printf("NO\n");}
        
        
    }
    return 0;
}