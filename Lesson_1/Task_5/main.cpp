#include <iostream>

using namespace std;

int main()
{
    int amount = 0;
    cout << "Enter the number of rows for the Christmas tree" << endl;
    cin >> amount;
    for(int columns = 0; columns < amount; columns++){
        for(int indentation = 0; indentation < amount + columns; indentation++){
            if(indentation < amount - columns - 1) {
                cout << " ";
            }
            else {
                cout << "*";
            }
        }
        cout << "\n";
    }
    for(int trunk = 0; trunk < amount - 1; trunk++){
        cout << " ";
    }
    cout << "*\n";
    return 0;
}
