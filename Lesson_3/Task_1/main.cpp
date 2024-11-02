#include <iostream>

using namespace std;

int askUserNumberRows() {
    int amount = 0;
    cout << "Enter the number of rows for the Christmas tree" << endl;
    cin >> amount;
    return amount;
}

void drawIndentation(int indentation) { // We draw indents in front of the stars
    if (indentation > 0) {
        cout << " ";
        drawIndentation(indentation - 1);
    }
}

void drawStars(int stars) { // We draw the number of stars in a row
    if (stars > 0) {
        cout << "*";
        drawStars(stars - 1);
    }
}

void drawTreesRows(int amount,int current_row = 0) { // We draw the Christmas tree without the trunk
    if (current_row < amount) {
        drawIndentation(amount - current_row - 1);
        drawStars(current_row * 2 + 1);
        cout << endl;
        drawTreesRows(amount, current_row + 1);
    }
}

void drawTrunk(int amount,int spaces = 0) { // We draw the required number of spaces and a star for the trunk
    if (spaces < amount - 1) {
        cout << " ";
        drawTrunk(amount, spaces + 1);
    }
    else {
        cout << "*" << endl;
    }
}

void drawTree() {
    int amount = askUserNumberRows();
    drawTreesRows(amount);
    drawTrunk(amount);
}

int main() {
    drawTree();
}
