using namespace std;
#include <iostream>

const int MAX_ROWS_COLS = 100;

void inputMatrix(int matrix[][MAX_ROWS_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void inputMatrix2(int matrix2[][MAX_ROWS_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix2[i][j];
        }
    }
}

void multiplyMatrixs(int matrix1[][MAX_ROWS_COLS], int matrix2[][MAX_ROWS_COLS], int matrix3[][MAX_ROWS_COLS], int k, int n, int m)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int p = 0; p < m; p++)
            {
                sum += matrix1[i][p] * matrix2[p][j];
            }
            matrix3[i][j] = sum;
        }
    }
}

void outputMatrix3(int matrix3[][MAX_ROWS_COLS], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix3[i][j] << " ";
        }
        cout << endl;
    }
}

void outputMatrix(int matrix[][MAX_ROWS_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j]<< " ";
        }
        cout << endl;
    }
}


void transponateMatrix(int matrix[][MAX_ROWS_COLS], int rows, int cols)
{
    for (int i = 0; i < rows - 1; i++)
    {
        for (int j =  i + 1; j < cols; j++)
        {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}


int main()
{
    //TASK 2

    /*int matrix[MAX_ROWS_COLS][MAX_ROWS_COLS];
    int matrix2[MAX_ROWS_COLS][MAX_ROWS_COLS];
    int matrix3[MAX_ROWS_COLS][MAX_ROWS_COLS];
    int k, n, m;
    cin >> k >> n >> m;
    inputMatrix(matrix, k, n);
    inputMatrix2(matrix2, n, m);
    multiplyMatrixs(matrix, matrix2, matrix3, k, n, m);
    outputMatrix3(matrix3, k, m);*/

    int matrix[MAX_ROWS_COLS][MAX_ROWS_COLS];
    int rows, cols;
    cin >> rows >> cols;
    inputMatrix(matrix, rows, cols);
    transponateMatrix(matrix, rows, cols);
}


