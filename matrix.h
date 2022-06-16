#include "utility.h"

template <typename T>
class Matrix {
public:
    vector<std::vector<T>> A;

    Matrix() {

    }

    Matrix(int n, int m) {
        A = vector<vector<T>>(n, vector<T>(m));
    }

    Matrix(int n, int m, T x) {
        A = vector<vector<T>>(n, vector<T>(m, x));
    }

    vector<T> &operator[](int i) {
        return A[i];
    }

    const vector<T> &operator[](int i) const {
        return A[i];
    }

    
};