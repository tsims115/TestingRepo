#include <stdio.h>
int main(){
    char name[50];
    printf("What is your name young one?\n");
    scanf("%s", name);
    printf("Nice to meet you %s\nNow starting for loop!\n", name);
    for(int i = 0; i < 1000; i++){
      printf("Hello World!\n");
    }
    return 0;
}
