#include<stdio.h>
int main(){
    char str[1000];
    printf("Enter a string: ");
    gets(str);

    //flag == 0 means starting of the word, flag == 1 means word already counted
    int flag = 0, count = 0;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            if(flag == 0){
                count++;
                flag = 1;
            }
        } else{
            flag = 0;
        }
    }

    printf("%d", count);
}
