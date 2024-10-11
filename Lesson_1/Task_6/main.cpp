#include <iostream>

using namespace std;

int main()
{
    int kilkist = 0;
    cout << "Enter a number that will be equal to the number of rows of the triangle" << endl;
    cin >> kilkist;
    while(1){
        for (long long zatrymka = 0; zatrymka < 1000000000; zatrymka++) { //затримка
        }
        if (system("cls")){ //очищення
            system("clear");
        }
        for(int vidstyp_vgor=0; vidstyp_vgor<kilkist; vidstyp_vgor++){ //відступ вгорі
            cout << "\n";
        }
        for(int sprait1=0; sprait1<kilkist; sprait1++){ //перший спрайт трикутника
            for(int velik_vidstyp=0; velik_vidstyp<kilkist*2; velik_vidstyp++){ //великий відступ для трикутників справа
                cout << "  ";}
            for(int ryadki=0; ryadki<kilkist-(kilkist-sprait1-1);ryadki++){
                cout << "* ";}
            cout << "\n";}
        for (long long zatrymka = 0; zatrymka < 1000000000; zatrymka++) { //затримка
        }
        if (system("cls")){ //очищення
            system("clear");
        }
        for(int vidstyp_vgor=0; vidstyp_vgor<kilkist; vidstyp_vgor++){ //відступ вгорі
            cout << "\n";
        }
        for(int vidstyp_vgor_povorot=1; vidstyp_vgor_povorot<kilkist; vidstyp_vgor_povorot++){ //відступ вгорі для поворотів
            cout << "\n";}
        for(int sprait2=0; sprait2<kilkist; sprait2++){ //другий спрайт трикутника
            for(int velik_vidstyp=0; velik_vidstyp<kilkist*2; velik_vidstyp++){ //великий відступ для трикутників справа
                cout << "  ";}
            for(int ryadki=0; ryadki<kilkist-sprait2;ryadki++){
                cout << "* ";}
            cout << "\n";}
        for (long long zatrymka = 0; zatrymka < 1000000000; zatrymka++) { //затримка
        }
        if (system("cls")){ //очищення
            system("clear");
        }
        for(int vidstyp_vgor=0; vidstyp_vgor<kilkist; vidstyp_vgor++){ //відступ вгорі
            cout << "\n";
        }
        for(int vidstyp_vgor_povorot=1; vidstyp_vgor_povorot<kilkist; vidstyp_vgor_povorot++){ //відступ вгорі для поворотів
            cout << "\n";}
        for(int sprait3=0; sprait3<kilkist; sprait3++){ //третій спрайт трикутника
            for(int malik_vidstyp=0; malik_vidstyp<kilkist+1; malik_vidstyp++){ //маленький відступ для трикутників справа
                cout << "  ";}
            for(int vidstyp=0; vidstyp<sprait3*2;vidstyp++){
                cout << " ";}
            for(int ryadki=0; ryadki<kilkist-sprait3;ryadki++){
                cout << "* ";}
            cout << "\n";}
        for (long long zatrymka = 0; zatrymka < 1000000000; zatrymka++) { //затримка
        }
        if (system("cls")){ //очищення
            system("clear");
        }
        for(int vidstyp_vgor=0; vidstyp_vgor<kilkist; vidstyp_vgor++){ //відступ вгорі
            cout << "\n";
        }
        for(int sprait4=0; sprait4<kilkist; sprait4++){ //четвертий спрайт трикутника
            for(int malik_vidstyp=0; malik_vidstyp<kilkist+1; malik_vidstyp++){ //маленький відступ для трикутників справа
                cout << "  ";}
            for(int vidstyp=0; vidstyp<(kilkist-sprait4)*2-2;vidstyp++){
                cout << " ";}
            for(int ryadki=0; ryadki<kilkist-(kilkist-sprait4-1);ryadki++){
                cout << "* ";}
            cout << "\n";}}
    return 0;
}
