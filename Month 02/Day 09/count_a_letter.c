#include<stdio.h>
int main(){
    char str[1000];
    int count=0;
    printf("Give a sentence:");
    gets(str);
    char ch;
    printf("Give a character:");
    scanf("%c",&ch);
    for(int i=0;str[i] !='\0';i++){
        if(str[i]==ch){
            count++;
        }
    }
    printf("%d",count);
}
