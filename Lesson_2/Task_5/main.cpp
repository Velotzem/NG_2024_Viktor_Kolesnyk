#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    int count = 0;
    int real_count = 0;
    cout << "Enter a string: ";
    getline(cin, text);
    for (int array_el_num = 0; array_el_num < text.length(); array_el_num++) {
        if((text[array_el_num] > 64 && text[array_el_num] < 91) || (text[array_el_num] > 96 && text[array_el_num] < 123)){
            count += 1;
            if(count == 1){ //Since count is reset to 0 with other symbols, count = 1 only once in the word and adds 1 to the counter
                real_count += count;
            }
        }
        else{
            count = 0;
        }
    }
    cout << real_count << " : the number of words in the string."<< endl;
    return 0;
}
