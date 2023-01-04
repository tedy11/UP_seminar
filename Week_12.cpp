using namespace std;
#include <iostream>

int sumOfDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return num % 10 + sumOfDigits(num / 10);
}

int recStrlen(const char* str)
{
    if (*str == '\0')
    {
        return 0;
    }
    return 1 + recStrlen(++str);
}
int countOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + countOfDigits(n - 1);
}

int pow(int n, int p) {
    if (p == 1) {
        return 1;
    }
    if (p == 0)
    {
        return n;
    }
    return n * pow(n, p - 1);
}

int reverse(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n % 10 * pow(10, countOfDigits(n) - 1) + reverse(n / 10);
}

int main()
{
    //cout << sumOfDigits(154);
    //cout << recStrlen("Happy new year");
    cout << reverse(1123);
}

