#include<stdio.h>
#include<string.h>
int mian(){
    int test_case;
    scanf("%d ",&test_case);
    while(test_case--){
        char f,l,str[102];
        
        gets(str);
        int count=0;
        for(int i=0;i<strlen(str);i++){
            if(i==0)
           f = str[i];
           else if (i==strlen(str)-1)
           {
              l= str[i];
           }
           else{
               count++;
           }
           

        }
        printf("%c%d%c\n",f,count,l);
        
    }

    return 0;
}