#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float ch1,ch2 = 0; char diya = 0;
    cout << "Enter the first number:" << endl;
    cin >> ch1;
    cout << "Enter the second number:" << endl;
    cin >> ch2;
    cout << "Enter the action you want to do with the numbers: +,-,*,/,^" << endl;
    cin >> diya;
    switch (diya) {
    case '+':
        cout << "The result of addition is : " << ch1+ch2 << endl;
        break;
    case '-':
        cout << "The result of the subtraction is : " << ch1-ch2 << endl;
        break;
    case '*':
        cout << "The result of the multiplication is : " << ch1*ch2 << endl;
        break;
    case '/':
        if (ch2 == 0) {
            cout << "You can't divide by 0!" << endl;
        }
        else {
            cout << "The result of division is : " << ch1/ch2 << endl;}
        break;
    case '^':
        cout << "the result of raising a number to a power is : " << pow(ch1,ch2) << endl;
        break;
    default:
        cout << "You entered something wrong!" << endl;
        break;
    }
    return 0;
}
