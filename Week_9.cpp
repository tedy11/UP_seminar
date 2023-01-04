using namespace std;
#include <iostream>

void swapNum(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

const int MAX_SIZE = 100;

void multiplyArr(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++) {
        arr[i] *= num;
        cout << arr[i] << " ";
    }
}

void minMaxArr(int* arr, int size, int& min, int& max)
{
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Min: " << min << endl;
    cout << "Max: " << max;
}

int** CreateMatrix(int rows, int cols)
{
    int** matrix = new int* [rows];
    for (size_t i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];
    }
    return matrix;

}

void inputMatrix(int** matrix, size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void numberOfMatrix(int** matrix, int rows, int cols, int number)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == number)
            {
                cout << "Row: " << i << " Col: " << j;
            }
            else 
                continue;
        }
    }
}

void free(int** matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        delete[]matrix[i];
    }
    delete[]matrix;
}

bool isDigit(char str)
{
    return str >= '0' && str <= '9';
}

void str(const char* str)
{
    char newStr = '\0';
    int index = 0;
    while (str[index] != '\0')
    {
        if (str[index] >= 65 && str[index] <= 90) {
            newStr = str[index] + 32;
            index++;
        }
        else if (str[index] > 97 && str[index] < 122)
        {
            newStr = str[index] - 32;
            index++;
        }
        else if (isDigit) {
            newStr = '#';
            index++;
        } 
        cout << newStr;
    }
   
}


int main()
{


    //TASK 1
    /*int a, b;
    int* num1 = &a;
    int* num2 = &b;
    cin >> *num1 >> *num2;
    cout << "First number: " << * num1 << "  Second number: " << * num2 << endl;
    swapNum(num1, num2);
    cout <<"First number: " << * num1 << "  Second number: " << * num2 << endl;*/

    //TASK 2


    //TASK 3
    /*int arr[MAX_SIZE];
    int size, num;
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    multiplyArr(arr, size, num);*/

    //TASK 5
    /*int min, max;
    int size;
    cout << "Enter the size of number: ";
    cin >> size;
    int arr[MAX_SIZE];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    minMaxArr(arr, size, min, max);*/


    //TASK 6
    /*int rows, cols, number;
    cin >> rows;
    cin >> cols;
    cout << "Enter a number: ";
    cin >> number;
    int** matrix = CreateMatrix(rows, cols);
    inputMatrix(matrix, rows, cols);
    numberOfMatrix(matrix, rows, cols, number);
    free(matrix, rows, cols);*/

    //TASK 7
    /*str("ABC");*/

}
