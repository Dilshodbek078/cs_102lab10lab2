#include <iostream>
using namespace std;


int sumArray(int* arr, int size) {
    int sum = 0;
    for (int* ptr = arr; ptr < arr + size; ptr++) {
        sum += *ptr;
    }
    return sum;
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int total = sumArray(arr, size);
    cout << total << endl; 

    return 0;
}
