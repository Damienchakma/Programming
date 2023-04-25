#include<stdio.h>
int main(){
    char ch;
    printf("Enter a capital letter: ");
    scanf("%c", &ch);

    if(ch < 'A' || ch > 'Z'){
        printf("Invalid input");
    } else{
        printf("%c", ch+32);
    }

    return 0;
}

