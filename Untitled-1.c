#include <stdio.h>

int main(void)
{
    // input for A matrix
    int row_A, col_A;
    printf("Enter the rows of matrix A : ");
    scanf("%d", &row_A);
    printf("Enter the columns of matrix A : ");
    scanf("%d", &col_A);

    int A[row_A][col_A];
    for (int i = 0; i < row_A; i++)
    {
        for (int j = 0; j < col_A; j++)
        {
            printf("Value at A(%d, %d) : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // input for B matrix
    int row_B, col_B;
    printf("Enter the rows of matrix B : ");
    scanf("%d", &row_B);
    printf("Enter the columns of matrix B : ");
    scanf("%d", &col_B);

    int B[row_B][col_B];
    for (int i = 0; i < row_B; i++)
    {
        for (int j = 0; j < col_B; j++)
        {
            printf("Value at B(%d, %d) : ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Print A matrix
    printf("\nA matrix :\n");
    for (int i = 0; i < row_A; i++)
    {
        for (int j = 0; j < col_A; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // Print B matrix
    printf("\nB matrix :\n");
    for (int i = 0; i < row_B; i++)
    {
        for (int j = 0; j < col_B; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    // Matrix addition of A and B matrix and Print output
    int ADD[row_A][col_A];
    if ((row_A == row_B) && (col_A == col_B))
    {
        /*matrix addition*/
        for (int i = 0; i < row_A; i++)
        {
            for (int j = 0; j < col_A; j++)
            {
                ADD[i][j] = A[i][j] + B[i][j];
            }
        }

        // Print A matrix
        printf("\n(A + B) matrix :\n");
        for (int i = 0; i < row_A; i++)
        {
            for (int j = 0; j < col_A; j++)
            {
                printf("%d\t", ADD[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("\nRow-column missmatch\n");
    }
}