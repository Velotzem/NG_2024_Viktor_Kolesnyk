#include <iostream>

using namespace std;

int main()
{
    int kilkist = 0;
    cout << "Enter a number that will be equal to the number of rows of the Christmas tree" << endl;
    cin >> kilkist;
    for(int stowpci=0; stowpci<kilkist; stowpci++){
        for(int vidstyp=1; vidstyp<kilkist-stowpci;vidstyp++){
             cout << " ";}
        for(int ryadki=1; ryadki<=2*(stowpci+1)-1;ryadki++){
            cout << "*";}
        cout << "\n";}
    if(kilkist > 1) {
    int nishka=1;
    while(nishka<kilkist){ //Використав while замість for, щоб було різноманіття
        cout << " ";
        nishka++;}
    cout << "*\n";}
    return 0;
}
