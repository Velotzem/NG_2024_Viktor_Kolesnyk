#include <iostream>

using namespace std;

int main() {
    const int max_length_text = 256;
    char text[max_length_text] = {0};
    int count_all_alphabetic_characters = 0, word_count = 0;
    cout << "Enter a string: ";
    cin.getline(text, max_length_text);
    for (int array_element_number = 0; array_element_number < strlen(text); array_element_number++) {
        if((text[array_element_number] > 64 && text[array_element_number] < 91)
            || (text[array_element_number] > 96 && text[array_element_number] < 123)){
            count_all_alphabetic_characters += 1;
            if(count_all_alphabetic_characters == 1){ //count_all_alphabetic_characterst = 1 only once in the word and adds 1 to the word_count
                word_count += count_all_alphabetic_characters;
            }
        }
        else{
            count_all_alphabetic_characters = 0;
        }
    }
    cout << word_count << " : the number of words in the string."<< endl;
    return 0;
}
