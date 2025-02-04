#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,4,3,2,1}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int decending = true; 

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            decending = false; 
            break; 
        }
    }

    if (decending) {
        cout << "Decending Order";
    } else {
        cout << "Not decending order";
    }

    return 0;
}