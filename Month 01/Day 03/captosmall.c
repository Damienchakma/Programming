#include<stdio.h>
int main(){
    char a;
    printf("enter a small number\n");
    scanf("%c",&a);
    if(97<=a && 122>=a){
        printf("capital letter is %c", a-32);
    } else{
        printf("Incorrect input");
    }
}
