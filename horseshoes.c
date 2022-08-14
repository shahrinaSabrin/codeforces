
#include <stdio.h>

int main()
{
   int count=0;
   int arr[4];
   for(int i=0;i<4;i++){
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<3;i++){
       int flag=1;
       for(int j=i;j<4;j++){
       if(arr[i]==arr[j]){
           flag=0;
           break;
       }
       if(flag==0)
       count++;
   }
   }
 
   
   printf("%d\n",count);
   
   
   return 0;
}