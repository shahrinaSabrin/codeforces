#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int count=0;
    while(t--){
        int p,q;
        scanf("%d %d",&p,&q);
        if(p+2<=q)
        count++;
    }
    printf("%d\n",count);
    return 0;
}