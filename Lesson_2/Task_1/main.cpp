#include <iostream>
using namespace std;
int main()
{
    int massive[5] = {0};
    for (int nomer=0;nomer<5;nomer++) {
        cout << "Enter " << nomer+1 << " value:" << endl;
        cin >> massive[nomer];
    }
    for (int nomer=0;nomer<5;nomer++) {
        cout << massive[nomer] << ", ";
    }
    return 0;
}
