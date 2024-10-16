#include <iostream>

using namespace std;

int main()
{
    int massif[5] = {0};
    for (int number=0;number<5;number++) {
        cout << "Enter " << number+1 << " value:" << endl;
        cin >> massif[number];
    }
    for (int number2=0;number2<5;number2++) {
        cout << massif[number2];
        if (number2<4) {
            cout << ", ";
        }
    }
    return 0;
}
