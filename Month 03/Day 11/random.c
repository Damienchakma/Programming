#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(0));
    for(int i = 0; i < 10; i++){
        //printf("%d\n", rand() % 7);
        printf("%d\n", rand());
    }
}
