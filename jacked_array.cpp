#include <iostream>
using namespace std;

int main() {
    int rows = 3;
    int* jaggedArray[3];

    jaggedArray[0] = new int[2]{1, 2};
    jaggedArray[1] = new int[4]{3, 4, 5, 6};
    jaggedArray[2] = new int[3]{7, 8, 9};

    int sizes[] = {2, 4, 3};
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < sizes[i]; j++) {
            cout << jaggedArray[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] jaggedArray[i];
    }

    return 0;
}
