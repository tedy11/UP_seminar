using namespace std;
#include <iostream>

int main()
{
    //TASK 1

    //  int number;
    //  cout << "Enter a number: ";
    //  cin >> number;
    //switch (number) {
    //case 1:
    //  cout << "Monday"; break;
    //case 2: 
    // cout << "Tuesday"; break;
    //case 3: 
    // cout << "Wednesday"; break;
    //case 4:
    //  cout << "Thursday"; break;
    //case 5: 
    // cout << "Friday"; break;
    //case 6: 
    // cout << "Saturday"; break;
    //case 7: 
    // cout << "Sunday"; break;
    //default: 
    // cout << "It's not a day of the week";
    //}


    //TASK 2

      /*int number;
      cout << "Enter a number: ";
      cin >> number;
      if (number % 100 == 0 && number % 400 != 0) {

                  cout << "The year " << number << " is skiped.";
      }
      else if (number % 4 == 0) {
          cout << "The year " << number << " is leap year.";
      }
      else {
          cout << "The year " << number << " isn't leap year.";
      }*/


      //TASK 3

         /* double a, b, x = 0;
          cout << "Enter a: ";
          cin >> a;
          cout << "ENter b: ";
          cin >> b;
        if (a != 0 )
        {
           if (b == 0) {
              cout << "Every x is solution";
           }
           else {
              cout << ((-1) * b) / a;
            }
         }
        else {
          cout << "No solution.";
         }*/



         //TASK 4

            /*int a, b, c;
            cout << "Enter a: ";
            cin >> a;
            cout << "Enter b: ";
            cin >> b;
            cout << "Enter c: ";
            cin >> c;
            int D;
            if (a == 0) {
                cout << "This is not quadratic equation.";
            }
            else {
                if (b % 2 == 0)
                {
                    D = pow(b / 2, 2) - a * c;
                }
                else {
                    D = pow(b, 2) - 4 * a * c;
                }
            }
            if (D > 0) {
                if (b % 2 == 0) {
                    cout << "x1 = " << ((-1) * b / 2 + sqrt(D)) / a << endl;
                    cout << "x2 = " << ((-1) * b / 2 - sqrt(D)) / a << endl;
                }
                else {
                    cout << "x1 = " << ((-1) * b + sqrt(D)) / 2 * a << endl;
                    cout << "x2 = " << ((-1) * b - sqrt(D)) / 2 * a << endl;
                }
            }
            else if (D == 0) {
                cout << "x = " << (-1) * b / 2 * a;
            }
            else {
                cout << "There is no solution.";
            }*/



            //TASK 5

            /*double x, y;
            cout << "Enter x: ";
            cin >> x;
            cout << "Enter y: ";
            cin >> y;
            if (x == 0 && y == 0) {
                cout << "Starting point";
            }
            else if (x == 0) {
                cout << "Y-axis";
            }
            else if (y == 0) {
                cout << "X-axis";
            }
            else if (x > 0 && y > 0) {
                cout << "First";
            }
            else if (x < 0 && y > 0) {
                cout << "Second";
            }
            else if (x < 0 && y < 0) {
                cout << "Third";
            }
            else if (x > 0 && y < 0) {
                cout << "Forth";
            }*/
}