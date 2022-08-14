#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int count=0;
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a<b)
        count++;
        if(a<c)
        count++;
        if(a<d)
        count++;

        printf("%d\n",count);
    }
}