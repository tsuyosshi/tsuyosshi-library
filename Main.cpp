#include <bits/stdc++.h>
#include "matrix.h"

using namespace std;

int main() {
    Matrix<int> M(3, 3, 0);
    cout << M[0][0] << endl;
    M[0][0] = 1;
    cout << M[0][0] << endl;
}