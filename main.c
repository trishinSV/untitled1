#include <stdio.h>
#define LINES 2
#define COLUMNS 3
int inputArray(float A[][COLUMNS])
{
    int i, j;
    float t;
    printf("Enter Matrix:\n");
    for(i=0;i<LINES;i++)
        for(j=0;j<COLUMNS;j++)
        {scanf("%f", &t);
            A[i][j]=t;}
}

int findSum (float A[][COLUMNS]) {
    int sum = 0;
    int result[COLUMNS];
    for (int i = 0; i < COLUMNS; i++) {
        sum = 0;
        for (int j = 0; j < LINES; j++) {
            if (A[j][i] > 0) {
                sum += A[j][i];
            }
        }
        result[i] = sum;
        printf("column #%d = %d\n", i, sum);
    }
    int min = result[0];
    int minColumn = 0;
    for (int k = 0; k < COLUMNS; k++) {
        if (result[k] < min){
            min = result[k];
            minColumn = k;
        }
    }
    printf("min: %d\n",minColumn+1);
    return minColumn;
}

int main()
{
    float A[LINES][COLUMNS];
    inputArray(A);
    findSum(A);

    getchar();
    return 0;
}

