#include<stdio.h>

int main() {
    FILE *fp;
    fp = fopen("C:\\Users\\damie\\OneDrive\\Desktop\\programming\\Month 03\\experiment\\something.txt", "a");
    if(fp == NULL) {
        printf("Not found");
        exit(1);
    }
    char str[1000];
    gets(str);

    fprintf(fp, "%s", str);

    fclose(fp);
}

