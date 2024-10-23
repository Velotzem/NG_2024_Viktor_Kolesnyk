#include <iostream>

using namespace std;

int main()
{
    const int size_massif = 20;
    int massif[size_massif] = {0};
    int number_of_array_massif  = size_massif, max = 0;
    for (int point_number = 0;point_number < size_massif;point_number++) {
        cout << "Enter " << point_number+1 << " value:";
        cin >> massif[point_number];
        if (massif[point_number] > max)
        {
            max = massif[point_number];
        }
        if (massif[point_number] == 0){
            number_of_array_massif = point_number;
            point_number = size_massif;}
    }
    cout << endl;
    for (int columns = 0;columns < number_of_array_massif;columns++){
        for (int space = 0;space < (max - massif[columns]) / 2;space++){ //Numbers cannot always make the same number of spaces on the left and right, so in such cases there will be 1 more on the right
            cout << " ";
        }
        for(int lines = 0; lines < massif[columns];lines++){
            cout << "*";
        }
        cout << "\n";
    }
}
