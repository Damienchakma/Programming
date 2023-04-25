#include<stdio.h>
int main(){
    char str[1000];
    printf("Enter a string: ");
    gets(str);

    int count = 0, largest_word_length = 0;

    for(int i=0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            count++;
        } else{
            if(count > largest_word_length){
                largest_word_length = count;
            }
            count = 0;
        }
    }

    if(count>largest_word_length){
        largest_word_length = count;
    }

    printf("%d", largest_word_length);
}
