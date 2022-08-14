//solved
#include <stdio.h>
#include<string.h>
int main()
{
   
   int b,p;
   scanf("%d %d",&b,&p);
   int count=1;
   while(p>=b){
       if((3*b)<=(2*p))
       count++;
       b*=3;
       p*=2;
   }
   printf("%d\n",count);
   
   
   return 0;
}