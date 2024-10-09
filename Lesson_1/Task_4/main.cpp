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
    if (1000 < zarpl) {
        if (zarpl < 1000000) {
            cout << "You are well done!" << endl;
        }
    }
    if (zarpl > 1000000){
        cout << "You are a millionaire!" << endl;
    }
    if (!(zarpl - 1000)) {
        cout << "The salary is not small enough to say that you should work more, but not large enough to say that you are well done!" << endl;
    }
    if (!(zarpl - 1000000)) {
        cout << "The salary is not so small enough to say that you well done, but not large enough to say that you are a millionaire!" << endl;
    }
    return 0;
}
