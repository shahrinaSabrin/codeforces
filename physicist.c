#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int flag=1;
    int a1=0,a2=0,a3=0;
    while(t--){
        
        int a[3];
        for(int i=0;i<3;i++){
           
            scanf("%d",&a[i]);
            if(i==0)
            a1+=a[i];
             if(i==1)
            a2+=a[i];
             if(i==3)
            a3+=a[i];
        }
    }
    if(a1==0 && a2==0 && a3==0)
    printf("YES\n");
    else
    printf("NO\n");

    return 0;
}