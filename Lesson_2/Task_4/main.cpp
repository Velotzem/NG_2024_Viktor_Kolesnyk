#include <iostream>
#include <string>

using namespace std;

int main() {
    string text; int count[128] = {0}; //A larger array could be used here, but I'm not using Windows 1251
    cout << "Enter a string: ";
    getline(cin, text);
    for (int nomer_elem_mas = 0; nomer_elem_mas < text.length(); nomer_elem_mas++) {
        char nomer_elem_mas_count = text[nomer_elem_mas];
        count[(int)nomer_elem_mas_count]++;
    }
    cout << "Number of different characters:\n";
    for (int nomer_elem_mas_out = 0; nomer_elem_mas_out < 128; ++nomer_elem_mas_out) {
        if (count[nomer_elem_mas_out] > 0) {
            cout << (char)nomer_elem_mas_out << ": " << count[nomer_elem_mas_out] << "\n";
        }
    }
    return 0;
}
