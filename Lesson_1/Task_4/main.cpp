#include <iostream>

using namespace std;

int main()
{
    float salary = 0;
    cout << "How much do you earn in dollars?" << endl;
    cin >> salary;
    if (salary < 1000) {
        cout << "You should work harder!" << endl;
    }
    if (salary > 999) {
        if (salary < 1000000) {
            cout << "You are well done!" << endl;
        }
        if (salary > 999999){
            cout << "You are a millionaire!" << endl;
        }
    }
    return 0;
}
