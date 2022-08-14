#include<stdio.h>
#include<math.h>
int main()

{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m;
        double n,ten;
        ten = 10;
        scanf("%d",&m);
        int count=0; 
        
        
        count=(m==0)?0:log10(m)+1;
        

        n = count-1;
       

        double p = pow(ten,n);
       

        int rem = m-p;
        printf("%d\n",rem);
        



    }
}