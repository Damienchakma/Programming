#include<stdio.h>

int main() {
    FILE *fp_in, *fp_out;
    fp_in = fopen("C:\\Users\\damie\\OneDrive\\Desktop\\programming\\Month 03\\experiment\\something.txt", "r");
    fp_out = fopen("copied_file.txt", "w");

    if(fp_in == NULL) {
        printf("Error happened!!");
        exit(1);
    }
    char str[1000];
    fgets(str, 1000, fp_in);

    fprintf(fp_out, "%s", str);

    fclose(fp_in);
    fclose(fp_out);
}
