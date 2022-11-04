using namespace std;
#include <iostream>

int main()
{
  // TASK 0

	/*int number;
	cout << "Enter a number: ";
	cin >> number;
	int first = number / 1000;
	int second = number / 100 % 10;
	int third = number % 100 / 10;
	int forth = number % 10;

	if (first == 5 || second == 5 || third == 5 || forth == 5) {
		if (forth == 5 || forth == 0) {
			cout << "The number contains the digit 5 and it is divisible by 5." << endl;

		}
		else {
			cout << "The number contains the digit 5 and it is divisible by 5." << endl;
		}
	    else if (number % 2 == 0 )
	    {
		cout << "The number doesn't contain the digit 5 and it is even.";

		}
	    else if (number % 2 != 0)
	    {
		cout << "The number doesn't contain the digit 5 and it is not even.";
	    }
	 }*/


	//TASK 1

	/*int n;
	cout << "Enter n: ";
	cin >> n;
	for (int i = n; i > 1; --i)
	{
		n *= i - 1;
	}
	cout << n;*/


	//TASK 2

	/*int number;
	cout << "Enter random numbers: ";
	int sum = 0;
	do {
		cin >> number;
		sum += number;
	} while (number);
	cout << "The sum is " << sum << endl;*/

	//TASK 3

	/*int number;
	cout << "Enter a number: ";
		cin >> number;

	if (number < 0) {
		number *= -1;
	}

	int sum = 0;

	while (number) {
		sum += number % 10;
		number /= 10;
	}

	cout << "The sum of the digits is " << sum;*/

	//TASK 4

	/*int number;
	cout << "Enter a number: ";
	cin >> number;

	bool flag = true;

	for (int i = 2; i < number; ++i) {
		if (number % 1 == 0) {
			cout << "The number is not prime.";
			flag = true;
			break;
		}
	}

	if (!flag) {
		cout << "The number is prime.";
	}*/

}
