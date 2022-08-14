#include<stdio.h>
int main(){
    int n,d,cnt=0;;
    scanf("%d %d",&n,&d);
    while(d--){
        int arr[n];
        int flag=1;
        for(int i;i<n;i++){
            scanf("%d",&arr[i]);
            if(arr[i]==0)
            flag=0;

        }
        if(flag==0){
            cnt++;
        }
        
    }

    return 0;
}