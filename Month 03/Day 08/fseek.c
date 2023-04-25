#include<stdio.h>
int main(){
    FILE * fp;
    fp = fopen("input.txt", "r");

    int ch = fgetc(fp);
    printf("%c", (char)ch);

    ch = fgetc(fp);
    printf("%c", (char)ch);

    fseek(fp, sizeof(char)*3, SEEK_CUR);

    ch = fgetc(fp);
    printf("%c", (char)ch);
}
//err
