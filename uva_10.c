//3n+1 
#include<stdio.h>
 int main()
{
   long int a,b,i,n,s,j,k;
  scanf("%ld%ld",&a,&b);
  
   if(a>0 && a<1000000 && b>0 && b< 1000000)
     {
          long int max_len=0;
          j=a;
          k=b;
          if(a>b)
            {
            j=b;
            k=a;
            }
          for(i=j;i<=k;i++)
          {
                  n=i;
                  long int len=1;
                  
                  while(n!=1)
                  {
                    if(n%2==0)
                      {
                        n=n/2;
                        len++;
                      }
                    else
                      {
                      n=3*n+1;
                      len++;
                      }
                  }
                  if(max_len<len)
                  max_len=len;
          }
            printf("%ld %ld %ld\n",a,b,max_len);

     }
return(0);
}