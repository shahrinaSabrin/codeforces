#include<stdio.h>
#include<string.h>
int main(){
    char num1[100],num2[101],sum[101];
   gets(num1);
   gets(num2);
   int len;
for(int a=0;num2[a]!='\0';a++)
     {
        len=a+1;
     }
   
    for (int i = 0; i < len; ++i)
    {
        if (num1[i] == num2[i])
        {
            sum[i] = '0';
        }
        else
        {
            sum[i] = '1';
        }
        printf("%c",sum[i]);
    }
    printf("\n");
    
    return 0;
}