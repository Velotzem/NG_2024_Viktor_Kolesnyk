#include <iostream>
using namespace std;
int main()
{
    int massive[5] = {0};
    int max = 0;
    for (int nomer=0;nomer<5;nomer++) {
        cout << "Enter " << nomer+1 << " value:";
        cin >> massive[nomer];
        if (massive[nomer] > max)
        {
            max = massive[nomer];
        }
    }
    cout << endl << endl;
    for (int stowp=0;stowp<max;stowp++){
        int znach_dlya_propysky=stowp;
        for(int ryadki=0; ryadki < 5 ;ryadki++){
            if (massive[ryadki]>znach_dlya_propysky){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
}
