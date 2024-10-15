#include <iostream>

using namespace std;

int main()
{
    int massive[20] = {0};
    int real_mas = 20, max = 0;
    for (int nomer=0;nomer<20;nomer++) {
        cout << "Enter " << nomer+1 << " value:";
        cin >> massive[nomer];
        if (massive[nomer] == 0){
            real_mas = nomer;
            break;}
        if (massive[nomer] > max)
        {
            max = massive[nomer];
        }
    }
    cout << endl;
    for (int stowp=0;stowp<real_mas;stowp++){
        for (int propysk=0;propysk<(max-massive[stowp])/2;propysk++){ //Numbers cannot always make the same number of spaces on the left and right, so in such cases there will be 1 more on the left
            cout << " ";
        }
        for(int ryadki=0; ryadki < massive[stowp];ryadki++){
            cout << "*";
        }
        cout << "\n";
    }
}
