#include <iostream>

using namespace std;

const int max_size = 15;

struct Matrix {
    int rows, columns;
    int data[max_size][max_size];
};

Matrix createMatrix() { // We create the necessary matrix
    Matrix matrix;
    cout << "Enter the number of rows and columns for the matrix (max " << max_size << "): ";
    cin >> matrix.rows >> matrix.columns;
    if (matrix.rows > max_size || matrix.columns > max_size) {
        cout << "Matrix size exceeds the allowed maximum!" << endl;
        matrix.rows = matrix.columns = 0;
    }
    return matrix;
}

Matrix enterMatrixElements(Matrix matrix) {  // We fill in the matrix
    cout << "Enter the elements of the matrix (" << matrix.rows << "x" << matrix.columns << "):\n";
    for (int row_number = 0; row_number < matrix.rows; ++row_number) {
        for (int column_number = 0; column_number < matrix.columns; ++column_number) {
            cout << "Element [" << row_number + 1 << "][" << column_number + 1 << "]: ";
            cin >> matrix.data[row_number][column_number];
        }
    }
    return matrix;
}

char askUserAction() { // We ask for operation
    char operation;
    cout << "Enter operation (+,-): ";
    cin >> operation;
    return operation;
}

Matrix performOperation(Matrix matrix_1, Matrix matrix_2, char operation) { // Performing an action with the matrix
    Matrix result;
    result.rows = matrix_1.rows;
    result.columns = matrix_1.columns;
    for (int row_number = 0; row_number < matrix_1.rows; ++row_number) {
        for (int column_number = 0; column_number < matrix_1.columns; ++column_number) {
            switch (operation) {
            case '+':
                result.data[row_number][column_number] = matrix_1.data[row_number][column_number] + matrix_2.data[row_number][column_number];
                break;
            case '-':
                result.data[row_number][column_number] = matrix_1.data[row_number][column_number] - matrix_2.data[row_number][column_number];
                break;
            default:
                cout << "Error: Unknown operation." << endl;
                result.rows = result.columns = 0;
                return result;
            }
        }
    }
    return result;
}

bool validMatrix(Matrix matrix) { // Checking if a matrix is ​​possible
    if (matrix.rows == 0 || matrix.columns == 0) {
        cout << "Error: Invalid matrix size." << endl;
        return false;
    }
    return true;
}

bool checkingSameSize(Matrix matrix_1, Matrix matrix_2) { // Checking that matrices are the same size
    return (matrix_1.rows == matrix_2.rows && matrix_1.columns == matrix_2.columns);
}

void outputResult(Matrix result) { // Data output
    if (result.rows == 0 && result.columns == 0) {
        return;
    }
    cout << "Result:\n";
    for (int row_number = 0; row_number < result.rows; ++row_number) {
        for (int column_number = 0; column_number < result.columns; ++column_number) {
            cout << result.data[row_number][column_number] << " ";
        }
        cout << endl;
    }
}

void matrixProcesses() { //Processes that occurred with matrices
    Matrix matrix_1 = createMatrix();
    if (!validMatrix(matrix_1)) {
        return;
    }
    Matrix matrix_2 = createMatrix();
    if (!validMatrix(matrix_2)) {
        return;
    }
    if (!checkingSameSize(matrix_1, matrix_2)) {
        cout << "Error: Matrices must have the same size for the operation." << endl;
        return;
    }
    matrix_1 = enterMatrixElements(matrix_1);
    matrix_2 = enterMatrixElements(matrix_2);
    char operation = askUserAction();
    Matrix result = performOperation(matrix_1, matrix_2, operation);
    outputResult(result);
}

int main() {
    matrixProcesses();
}
