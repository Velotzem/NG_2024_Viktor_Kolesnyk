#include <iostream>

using namespace std;

int main()
{
    int massif[20] = {0};
    int real_massif = 20, max = 0;
    for (int number=0;number<20;number++) {
        cout << "Enter " << number+1 << " value:";
        cin >> massif[number];
        if (massif[number] == 0){
            real_massif = number;
            break;}
        if (massif[number] > max)
        {
            max = massif[number];
        }
    }
    cout << endl;
    for (int columns=0;columns<real_massif;columns++){
        for (int space=0;space<(max-massif[columns])/2;space++){ //Numbers cannot always make the same number of spaces on the left and right, so in such cases there will be 1 more on the right
            cout << " ";
        }
        for(int lines=0; lines < massif[columns];lines++){
            cout << "*";
        }
        cout << "\n";
    }
}
