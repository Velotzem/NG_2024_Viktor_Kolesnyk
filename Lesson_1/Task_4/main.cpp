#include <iostream>

using namespace std;

int main()
{
    float zarpl = 0;
    cout << "How much do you earn in dollars?" << endl;
    cin >> zarpl;
    if (zarpl < 1000) {
        cout << "You should work harder!" << endl;
    }
    if (999 < zarpl) {
        if (zarpl < 1000000) {
            cout << "You are well done!" << endl;
        }
    }
    if (zarpl > 999999){
        cout << "You are a millionaire!" << endl;
    }
    return 0;
}
