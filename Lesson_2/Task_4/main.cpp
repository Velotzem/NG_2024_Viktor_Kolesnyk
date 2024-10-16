#include <iostream>
#include <string>

using namespace std;

int main() {
    string text; int count[128] = {0}; //A larger array could be used here, but I'm not using Windows 1251
    cout << "Enter a string: ";
    getline(cin, text);
    for (int array_element_number = 0;array_element_number < text.length();array_element_number++) {
        char array_element_number_count = text[array_element_number];
        count[(int)array_element_number_count]++;
    }
    cout << "Number of different characters:\n";
    for (int array_element_number_out = 0;array_element_number_out < 128;array_element_number_out++) {
        if (count[array_element_number_out] > 0) {
            cout << (char)array_element_number_out << ": " << count[array_element_number_out] << "\n";
        }
    }
    return 0;
}
