#include<stdio.h>
int main() {
    FILE *fp_in, *fp_out;
    fp_in = fopen("C:\\Users\\damie\\OneDrive\\Desktop\\programming\\Month 03\\experiment\\numbers2.txt", "r");
    fp_out = fopen("sum2.txt", "w");

    if(fp_in == NULL) {
        printf("Error happened");
        exit(1);
    }
    int num1, num2;
    char str[1000];
    fgets(str, 1000, fp_in);
    // str = "10 5"
    sscanf(str, "%d %d", &num1, &num2);
    int sum = num1 + num2;
    fprintf(fp_out, "%d", sum);

    fclose(fp_in);
    fclose(fp_out);
}
