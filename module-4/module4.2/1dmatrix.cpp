#include <iostream>
using namespace std;

class Matrix {
private:
    int size;
    int *data;

public:
    Matrix(int n) {
        size = n;
        data = new int[size];
    }

    // Overload the "+" operator to add two matrices
    Matrix operator+(Matrix other) {
        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    void input() {
        cout << "Enter " << size << " values for the matrix: ";
        for (int i = 0; i < size; i++) {
            cin >> data[i];
        }
    }

    void output() {
        cout << "Matrix: ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    ~Matrix() {
        delete[] data;
    }
};

int main() {
    int n;
    cout << "Enter the size of the matrices: ";
    cin >> n;

    Matrix a(n);
    a.input();
    a.output();

    Matrix b(n);
    b.input();
    b.output();

    Matrix c = a + b; // Uses the overloaded "+" operator
    c.output();

    return 0;
}
