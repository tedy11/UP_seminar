#include <iostream>
using namespace std;
const unsigned MAX_SIZE = 100;
const int SIZE = 100;

void inputArray(int arr[MAX_SIZE], int n)
{
    for (int i = 0; i < n && i< MAX_SIZE; i++) {
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
}

double avarage(int arr[MAX_SIZE], int n)
{
    double sum = 0;
    for (int i = 0; i < n && i < MAX_SIZE; i++)
    {
        sum += arr[i];
    }

    return sum / n;
}


void printArray(int arr[MAX_SIZE], int n)
{
    for (int i = 0; i < n && i < MAX_SIZE; i++)
    {
        cout << arr[i] << endl;
    }
}

void reverse(int arr[MAX_SIZE], int n) 
{
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}

void minMax(int arr[MAX_SIZE], int n)
{
    int min = INT32_MAX, max = INT32_MIN, secondMin = INT32_MAX, secondMax = INT32_MIN;
    for (int i = 0; i < n; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (secondMin > arr[i] && arr[i] != min) {
            secondMin = arr[i];
        }

        if (secondMax < arr[i] && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }

    cout << min << " " << max << " " << secondMin << " " << secondMax;
}

void dublicates(int arr[MAX_SIZE], int n, int k) {
    int counter = 0;
    int pos[MAX_SIZE];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            pos[counter] = i;
            counter++;

        }
    }
    cout << counter << endl;
    cout << "Positions: " << endl;
    printArray(pos, counter);
}

bool isMirror(int arr[MAX_SIZE], int n)
{
    for (int i = 0, j = n -1; i < n /2 && j > 1; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }
    }

    return true;
}

void inputDigits(int arr[MAX_SIZE], int N)
{
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
}

bool isIntresting(int number)
{
    int lastDigit = number % 10; 
    number /= 10;

    while (number != 0)
    {
        int currentDigit = number % 10;
        number /= 10;

        if (currentDigit > lastDigit)
            return false;

        lastDigit = currentDigit;
    }

    return true;
}

void intrestingDigit(int arr[MAX_SIZE], int N)
{
    for (int i = 0; i < N; i++)
    {
        if (isIntresting(arr[i])) 
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    //int k;
    //cin >> k;
    /*const int n = 5;
    int arr[] = {1,2,3,4,5};
    inputArray(arr, n);
    cout << isMirror(arr, n);*/
    int N;
    cin >> N;
    int arr[SIZE] = {};
    inputDigits(arr, N);
    intrestingDigit( arr, N);

}

