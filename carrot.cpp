#include <iostream>

using namespace std;

int main() {
    const char text[] = "Spwwz, declyrpc. Dppxd wtvp jzf yze ufde l dnctae vtootp, dz zfc lrpynj slgp dzxp uzm qzc jzf. Tq jzf hlye ez lnnpae esp “uzm” zqqpc - ufde afds ez jzfc cpaz esp nzop, esle sld opncjaepo estd xpddlrp, lyo ylxp te nlccze.naa. Hp lcp hltetyr…";
    char decrypted_text[500];
    for (int shift = 1; shift < 26;shift++) {
        int character_number = 0;
        while(true) {
            char character = text[character_number];
            if (character == '\0') {
                decrypted_text[character_number] = '\0';
                break;
            }
            if (character >= 'A' && character <= 'Z') {
                character = (character - 'A' - shift + 26) % 26 + 'A';
            }
            else if (character >= 'a' && character <= 'z') {
                character = (character - 'a' - shift + 26) % 26 + 'a';
            }
            decrypted_text[character_number] = character;
            character_number++;
        }
        cout << "Displacement " << shift << ": " << decrypted_text << endl << endl;
    }
    return 0;
}



