#include <iostream>

using namespace std;

int main()
{
    int massif[5] = {0};
    int max = 0;
    for (int number=0;number<5;number++) {
        cout << "Enter " << number+1 << " value:";
        cin >> massif[number];
        if (massif[number] > max)
        {
            max = massif[number];
        }
    }
    cout << endl << endl;
    for (int columns=0;columns<max;columns++){
        for(int lines=0; lines < 5 ;lines++){
            if (massif[lines]>columns){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
}
