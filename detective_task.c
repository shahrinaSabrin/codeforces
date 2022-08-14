//SOLVED!
#include<stdio.h>
#include<string.h>
int main(){
    int t_case;
    scanf("%d ",&t_case);
    while(t_case--){
        char ch[200000];
        gets(ch);
        //find the last index 0f '1'
        int last_1=0,first_0=strlen(ch)-1;
        for(int i=0;i<strlen(ch);i++){
            if(ch[i]=='1'){
                last_1=i;
            }
        }
        //find the first index of '0'
         for(int i=0;i<strlen(ch);i++){
            if(ch[i]=='0'){
                first_0=i;
                break;
            }
        }
        
        int count =0,flag=0;
        //make sure that '0' or '1' exist
        for(int i=0;i<strlen(ch);i++){
            if((ch[i]=='0')||(ch[i]=='1')){
                flag=1;
                break;
            }
        }
        //case of single length or '0' or '1' doesnot exist
        int len=strlen(ch);
        if((len==1)||flag==0)
            count=len;
        
        else{
        for(int i=last_1;i<=first_0;i++){
            count++;
        }
        }
        printf("%d\n",count);

    }

    return 0;
}