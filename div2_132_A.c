//solved!
#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        char ch[7];
        gets(ch);
       
        int c_r=0,c_g=0,c_b=0;
        for(int i=0;i<=strlen(ch);i++){
            if(ch[i]=='r'){
                for(int j=i;j<strlen(ch);j++){
                    if(ch[j]=='R')
                    c_r++;
                  
                }
                
            }
            

           else if(ch[i]=='g'){
                for(int j=i;j<strlen(ch);j++){
                    if(ch[j]=='G')
                    c_g++;
                  
                }
                
            }

           else if(ch[i]=='b'){
                for(int j=i;j<strlen(ch);j++){
                    if(ch[j]=='B')
                    c_b++;
                  
                }
               
            }
        }
        if((c_r!=0)&&(c_g!=0)&&(c_b!=0))
        {
            printf("YES\n");
        }
        else
        printf("NO\n");
        
        
    }

    return 0;
}