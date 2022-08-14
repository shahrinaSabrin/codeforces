//SOLVED!
#include<stdio.h>
#include<math.h>
int main(){
    int n,a1,a2,a3,b1,b2,b3;
   float num1,num2;
    scanf("%d %d %d\n%d %d %d\n%d",&a1,&a2,&a3,&b1,&b2,&b3,&n);
    a1=a1+a2+a3;

    b1=b1+b2+b3;
    num1=ceil((float)a1/5);
    num2=ceil((float)b1/10); 
   
    int num=num1+num2;
   
    
    if(num<=n){
    printf("YES\n");
    }
    else{
    printf("NO\n");
    }
        
    
    return 0;
}