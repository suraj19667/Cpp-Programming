#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 6, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int accending = true; 

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            accending = false; 
            break; 
        }
    }

    if (accending) {
        cout << "Accending Order";
    } else {
        cout << "Not accending order";
    }

    return 0;
}