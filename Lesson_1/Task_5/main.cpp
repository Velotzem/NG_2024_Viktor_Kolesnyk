#include <iostream>

using namespace std;

int main()
{
    int kilkist = 0;
    cout << "Enter a number that will be equal to the number of rows of the Christmas tree" << endl;
    cin >> kilkist;
    for(int i=0; i<kilkist; i++){
        for(int j=1; j<kilkist-i;j++){
             cout << " ";}
        for(int j=1; j<=2*(i+1)-1;j++){
            cout << "*";}
        cout << "\n";}
    if(kilkist > 1) {
    int j=1;
    while(j<kilkist){ //Використав while замість for, щоб було різноманіття
        cout << " ";
        j++;}
    cout << "*\n";}
    return 0;
}
