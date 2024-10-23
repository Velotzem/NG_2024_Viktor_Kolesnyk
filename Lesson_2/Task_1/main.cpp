#include <iostream>

using namespace std;

int main()
{
    const int size_massif = 5; //It is enough to change the size of the array so that there is no comma at the end
    int massif[size_massif] = {0};
    for (int point_number = 0;point_number < size_massif;point_number++) {
        cout << "Enter " << point_number + 1 << " value:" << endl;
        cin >> massif[point_number];
    }
    for (int number = 0;number < size_massif;number++) {
        cout << massif[number];
        if (number < size_massif - 1) {
            cout << ", ";
        }
    }
    return 0;
}
