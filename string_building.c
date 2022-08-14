#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d ",&t);
    getchar();
    while(t--){
        int flag =1;
       char st[52];
      if(strlen(st)<2){
          flag=0;
      }
     else if(strlen(st)==2){
          if(st[0]!=st[1])
          flag=0;
      }
      else{
          for(int i=0;i<strlen(st)-2;i++){
              if((st[i]!=st[i+1])&&(st[i+1]!=st[i+2])){
                  flag=0;
              }
          }
      }
      int len=strlen(st);
      printf("%d\n",len);
      

       }
        
    
    return 0;
}