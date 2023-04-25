#include<stdio.h>
int main() {
    FILE *fp_in, *fp_out;
    fp_in = fopen("input.txt", "r");
    fp_out = fopen("copied_file.txt", "w");

    if(fp_in == NULL) {
        perror("Can't open file");
        exit(1);
    }

    //EOF
    while(1) {
        int ch = fgetc(fp_in);
        if(ch==EOF){
            break;
        }
        fputc(ch, fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);
}
