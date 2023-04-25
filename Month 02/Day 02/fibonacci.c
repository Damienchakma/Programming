#include<stdio.h>
int main()
{
    int first = 0, second = 1, next;
    printf("%d %d ", first, second);
    for(int step = 3; step<=25; step++){
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
}
