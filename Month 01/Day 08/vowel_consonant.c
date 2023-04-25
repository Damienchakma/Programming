#include<stdio.h>
int main(){
    char letter;
    printf("Enter a letter:");
    scanf("%c",&letter);
    if((letter>=65 && letter<=90) || (letter>=97 && letter<=122)){
        if(letter=='A'  || letter == 'E' || letter=='I'|| letter=='O'|| letter=='U'|| letter=='a'  || letter == 'e' || letter=='i'|| letter=='o'|| letter=='u'){
           printf("vowel");
        } else{
            printf("consonant");

        }
    }else{
        printf("Not a letter");
    }
}
