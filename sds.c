#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int result=0;
    int sum=0;
    if(n==1){
        result=arr[0];
    }
    else{
        for(int i=1;i<n;i++){
            sum=arr[i+1]*2;
            result+=sum*2;

        }
        
    }
    printf("%d",result);




    return 0;
}