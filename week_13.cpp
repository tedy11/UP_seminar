using namespace std;
#include <iostream>

bool equal(const char* str1, const char* str2)
{
    if (*str1 != *str2)
    {
        return false;
    }
    else if (*str1 == '\0' && *str2 == '\0')
    {
        return true;
    }
        return equal(str1 + 1, str2 + 1);
}

int smallest(int* arr, int length, int n = INT32_MAX)
{
    if (length == 0)
    {
        return n;
    }
    return smallest(arr + 1, length - 1, (*arr < n ? *arr : n));
}

void evaluate(const char* str, int count[3])
{
    if (*str == '\0')
    {
        cout << "Upper case letters: " << count[0] << '\n';
        cout << "Lower case letters: " << count[1] << '\n';
        cout << "NUmbers: " << count[2] << '\n';
        return;
    }

    if (*str >= 'A' && *str <= 'Z')
    {
        count[0]++;
    }
    else if (*str >= 'a' && *str <= 'z')
    {
        count[1]++;
    }
    else if (*str >= '0' && *str <= '9')
    {
        count[2]++;
    }
    evaluate(str + 1, count);
}

void hanoiTowers(int n, char start, char help, char end) {
    if (n == 0) {
        return;
    }

    hanoiTowers(n - 1, start, end, help);
    std::cout << "Move disk " << n << " from " << start << " to " << end << '\n';
    hanoiTowers(n - 1, help, start, end);
}

int main()
{
    int arr[6] = { 1,2, -1, 4, 54, 5 };
    //cout << boolalpha << equal("Hello", "Hello ") << '\n';
    // std::cout << smallest(array, 6) << '\n';

    // srand(time(0));
    // std::cout << rand() % 10 << std::endl;

    // int count[3] = {0};
    // evaluate2("3 Doors Down");

    hanoiTowers(3, 'A', 'B', 'C');
}

