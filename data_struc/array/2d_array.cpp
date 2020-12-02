#include <stdio.h>
#include <conio.h>

void lower(int matrix[100][100], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i < j)
            {
                cout << "0"
                     << " ";
            }
            else
                cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
// Function to form upper triangular marix
void upper(int matrix[100][100], int row, int col)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i > j)
            {
                cout << "0"
                     << " ";
            }
            else
                cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrix[100][100], i, j;
    int row, col;

    cout << "enter the  number of rows and columns in 2-d arrrays" << endl;
    cin >> row >> col;

    for (i < 0; i < row; i++)
    {
        for (j < 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "output matrix" << endl;
    for (i < 0; i < row; i++)
    {
        for (j < 0; j < col; j++)
        {
            cout >> matrix[i][j] << / n;
        }
    }
    cout << "Lower triangular matrix: \n";
    lower(matrix, row, col);

    cout << "Upper triangular matrix: \n";
    upper(matrix, row, col);

    return 0;
}