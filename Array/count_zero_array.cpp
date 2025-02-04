#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 5, 0, 0, 3, 0, 4}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0; 

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }

    cout << "Number of zero:" << count << endl;

    return 0;
}