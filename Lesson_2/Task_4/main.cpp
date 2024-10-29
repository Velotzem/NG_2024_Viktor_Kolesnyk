#include <iostream>

using namespace std;

int main() {
    const int max_length_text = 500; //set the size of the string
    char text[max_length_text] = {0};
    int count[128] = {0}; //a larger array could be used here, but I'm not using Windows 1251
    int length_of_text = 0;
    cout << "Enter a string: ";
    cin.getline(text, max_length_text);
    while(text[length_of_text] != '\0'){ //finding the length of a string
        length_of_text++;
    }
    for (int array_element_number = 0;array_element_number < length_of_text; array_element_number++) { //it writes in the array count +1 to the value of the numerical values ​​of the char characters
        count[(int)text[array_element_number]]++;
    }
    cout << "Number of different characters:\n";
    int array_element_number_out = 0;
    while(array_element_number_out < 128) {
        if (count[array_element_number_out]) { //output only those characters whose count > 0
            cout << (char)array_element_number_out << ": " << count[array_element_number_out] << "\n";
        }
        array_element_number_out++;
    }
    return 0;
}
