#include<stdio.h>
int main() {
    FILE *fp;
    fp = fopen("input.txt", "r");

    if(fp==NULL){
        perror("Can't open file");
        exit(1);
    }

    long int size = ftell(fp);
    printf("%ld Bytes\n", size);

    fgetc(fp);
    fseek(fp, 0, SEEK_END);

    size = ftell(fp);
    printf("%ld Bytes\n", size);

    fclose(fp);
}
