//SOLVED!
#include<stdio.h>
int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int size=1;
        for(int i=0;i<n;i++)
        {
             if((arr[i]==0)&&arr[i-1]==0){
            size=-1;
            break;
            }

           else if(arr[i]==0)
           size=size;

          else  if((arr[i]==1)&&arr[i-1]==1)
            size+=5;
           else if(arr[i]==1)
           size+=1;
            
        }
    printf("%d\n",size);
    }

    return 0;
}