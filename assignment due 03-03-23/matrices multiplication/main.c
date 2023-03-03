#include <stdio.h>
#include <stdlib.h>
int first[7][7], second[7][7], result[7][7], r1, c1, r2, c2;
r1 = 6;
r2 = 6;
c1 = 4;
c2 = 4;

// f get matrix elements entered by the user
void getMatrixElements(int matrix[][7], int row, int column)
{

    printf("\nEnter elements: \n");

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// function to multiply two matrices
void multiplyMatrices(int first[][7],
                      int second[][7],
                      int result[][7],
                      int r1, int c1, int r2, int c2)
{

    // Initializing elements of matrix mult to 0.
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            result[i][j] = 0;
        }
    }

    // Multiplying first and second matrices and storing it in result
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            for (int k = 0; k < c1; ++k)
            {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

// function to display the matrix
void display(int result[][7], int row, int column)
{



    printf("RESULT:\n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            printf("%d  ", result[i][j]);
            if (j == column - 1)
                printf("\n");
        }
    }
}

int main()
{

    // get elements of the first matrix
    printf("First matrix \n");
    getMatrixElements(first, r1, c1);
    printf("Second matrix \n");
    // get elements of the second matrix
    getMatrixElements(second, r2, c2);

    // multiply
    multiplyMatrices(first, second, result, r1, c1, r2, c2);

    // display
    display(result, r1, c2);

    return 0;
}
