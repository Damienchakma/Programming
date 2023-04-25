#include<stdio.h>
int main()
{
    char str[1000];
    gets(str);
    int flag = 0;
    //for(int i=0; str[i] != '\0'; i++){
    for(int i=0; i<strlen(str); i++){
        if(str[i]==' '){
            if(flag==0){
                printf("\n");
                flag=1;
            }
        } else{
            printf("%c", str[i]);
            flag = 0;
        }
    }
}
