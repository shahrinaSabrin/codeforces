#include<stdio.h> 
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int count=0;
        int n; 
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n-1;i++){
            if((arr[i]+arr[i+1])%2!=0){
                count++;
                i++;
            }
           
           
        }
        printf("%d\n",count);
    }

    return 0;
}