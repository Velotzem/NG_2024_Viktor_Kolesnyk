#include <iostream>
#include <windows.h>

using namespace std;

int kilkist = 0;

void clear() {
    Sleep(1000);
    if (system("cls")){
        system("clear");
    }
    for(int i=0; i<kilkist; i++){
        cout << "\n";
    }
}
void sycl1() {
    for(int j=0; j<kilkist+1; j++){
        cout << "  ";}
}
void sycl2() {
    for(int j=0; j<kilkist*2; j++){
        cout << "  ";}
}
void vidstyp_dlya_sycliv(){
    for(int i=1; i<kilkist; i++){
        cout << "\n";}
}

int main()
{
    cout << "Enter a number that will be equal to the number of rows of the triangle" << endl;
    cin >> kilkist;
    while(1){
        clear();
        for(int i=0; i<kilkist; i++){
            sycl2();
            for(int j=0; j<kilkist-(kilkist-i-1);j++){
                cout << "* ";}
            cout << "\n";}
        clear();
        vidstyp_dlya_sycliv();
        for(int i=0; i<kilkist; i++){
            sycl2();
            for(int j=0; j<kilkist-i;j++){
                cout << "* ";}
            cout << "\n";}
        clear();
        vidstyp_dlya_sycliv();
        for(int i=0; i<kilkist; i++){
            sycl1();
            for(int j=0; j<i*2;j++){
                cout << " ";}
            for(int j=0; j<kilkist-i;j++){
                cout << "* ";}
            cout << "\n";}
        clear();
        for(int i=0; i<kilkist; i++){
            sycl1();
            for(int j=0; j<(kilkist-i)*2-2;j++){
                cout << " ";}
            for(int j=0; j<kilkist-(kilkist-i-1);j++){
                cout << "* ";}
            cout << "\n";}}
    return 0;
}
