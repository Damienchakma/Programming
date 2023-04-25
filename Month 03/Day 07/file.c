#include<stdio.h>

int main() {
    FILE *fp;
    fp = fopen("in.txt", "r");
    if(fp == NULL) {
        printf("Not found");
        exit(1);
    }
    int num;
    fscanf(fp, "%d", &num);
    printf("%d", num);

    fclose(fp);
}
