#include<stdio.h>
#include<time.h>

int func() {
    int arr[1000];
    int multi = 0, n = 2, k = 19;
    for(int i = 0; i < 1000000; i++){
        multi = n * k;
    }
}

int main() {
    clock_t start_time, end_time;

    start_time = clock(); // 10
    func();
    end_time = clock(); // 510

    printf("%.9f", (double)(end_time-start_time)/CLOCKS_PER_SEC);
}
