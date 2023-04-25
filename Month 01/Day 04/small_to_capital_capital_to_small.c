#include<stdio.h>
int main(){
    char ch;
    printf("Enter a letter: ");
    scanf("%c", &ch);

    if((ch>='A' && ch <='Z') || (ch>='a' && ch <='z')){
        if(ch>='A' && ch <='Z'){
            printf("%c", ch+32);
        } else{
            printf("%c", ch-32);
        }
    } else{
        printf("Invalid input");
    }

    return 0;
}
