#include<stdio.h>
int main()
{
    int oneDArray[] = {1, 2, 3};
    int arr[5][3] = {
        { 2, 3, 5 },
        { 6, 7, 8 },
        { 1, 2, 4 },
        { 3, 4, -2 },
        { 2, -5, 0 },
    };
    for(int i = 0; i<5; i++){
        for(int j=0; j<3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int row, column;

    printf("Enter row number: ");
    scanf("%d", &row);
    printf("Enter column number: ");
    scanf("%d", &column);

    printf("Your desired number: %d", arr[row][column]);
}
