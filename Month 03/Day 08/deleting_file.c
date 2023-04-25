#include<stdio.h>
int main() {
    int result = remove("new");
    if(result != 0) {
        perror("Failed to delete the file");
        exit(1);
    }
}
