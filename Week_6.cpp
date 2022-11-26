
using namespace std;

#include <iostream>

//TASK 1

int abs(int n) {
    return n > 0 ? n : (-1) * n;
}

int pow(int n, int p) {
    int power = 1;
    for (int i = 0; i < p; ++i) {
        power *= n;
    }
    return power;
}


double min(double a, double b) {
    return a > b ? b : a;
}

int minInt(int a, int b) {
    return a > b ? b : a;
}

long max(long a, long b) {
    return a > b ? a : b;

}

int minOfThree(int a, int b, int c) {
    return minInt(a, minInt(b, c));
}


int maxOfThree(int a, int b, int c) {
    return max(a, max(b, c));
}

bool isLower(char c) {
    return c >= 'a' && c <= 'z';
}

bool isUpper(char c) {
    return c >= 'A' && c <= 'Z';
}

bool isLetter(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
    // return isLower(c) || isUpper(c);
}

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

int isLower();

char toUpper(char c) {
    if (isLower(c)) {
        return c - ('a' - 'A');
    }
    return c;
}

char toLower(char c) {
    if (isUpper(c)) {
        return c + ('a' - 'A');
    }
    return c;
}

int main()
{

    // TASK 0


    /*int n;
    cout << "Enter n: ";
    cin >> n;

    int counter = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int fact = 1;
            for (int k = 1; k <= counter; ++k) {
                if (counter == 0) {
                    fact = 1;
                    break;
                }
                fact *= k;
            }
            ++counter;
            cout << fact << " ";

        }
        cout << endl;
    }*/


   //TASK 1

    cout << abs(-1) << endl;
    cout << pow(2, 3) << endl;
    cout << min(1, 2) << endl;
    cout << max(1, 3) << endl;
    cout << minOfThree(1, 5, 9) << endl;
    cout << maxOfThree(1, 5, 9) << endl;
    cout << boolalpha << isLower('A') << endl;
    cout << boolalpha << isUpper('a') << endl;
    cout << boolalpha << isLetter('-') << endl;
    cout << boolalpha << isDigit('0') << endl;
    cout << isLower('R') << endl;


}

