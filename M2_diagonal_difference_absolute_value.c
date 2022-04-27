#include <stdio.h>

int main(void)
{
    // user input
    int rows, cols;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &cols);

    int A[rows][cols];
    printf("Enter the elements : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Value at A(%d, %d) : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // find the first diagonal sum
    int first_diagonal_sum = 0;
    for (int i = 0; i < rows; i++)
    {
        first_diagonal_sum += A[i][i];
    }

    // find sum of second diagonal
    int second_diagonal_sum = 0;
    for (int i = 0; i < rows; i++)
    {
        second_diagonal_sum += A[i][rows - 1 - i];
    }

    // find first an dsecond diagonal sum absolute difference
    int difference;
    difference = first_diagonal_sum - second_diagonal_sum;
    if (difference < 0)
    {
        difference = 0 - difference;
    }

    // print output
    printf("Absolute value of diagonal difference : %d\n", difference);

    return 0;
}
