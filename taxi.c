//SOLVED
#include<stdio.h>
#include<math.h>
int main()
{
int t;
int n,m,g1=0,g2=0,g3=0,g4=0,result;
scanf("%d",&t);
while(t--){


scanf("%d",&m);

 if(m==4)
g4++;
else if(m==3)
g3++;
else if(m==2)
g2++;
else
g1++;
}


if(g1>g3)
{
if(g2%2==0)
g1=g1-g3;
else
g1=g1-(g3+2);
}

else if(g3>=g1)
g1=0;


g2=ceil((float)g2/2);
g1=ceil((float)g1/4);


result =g1+g2+g3+g4;


printf("%d\n",result);

  return 0;
}


