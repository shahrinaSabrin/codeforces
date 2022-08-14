#include<stdio.h>
#include<string.h>
int main(){
    char st1[101],st2[101];
    gets(st1);
    gets(st2);
  
    for (int i = 0; i < strlen(st1); i++) {
        if (st1[i] < 92) {
            st1[i] += 32;
        }
        if (st2[i] < 92) {
            st2[i] += 32;
        }
    }
    int x= strcmp(st1,st2);
    if (x < 0) {
      printf("-1\n");
    }
     else if (x > 0) {
      printf("1\n");
    }
    else if(x==0) {
      printf("0\n");
    }
    return 0;
}