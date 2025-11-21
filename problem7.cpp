#include <iostream>
using namespace std;

int findLargestElement(const int* arr, int size) {
    const int* ptr = arr;
    int maxVal = *ptr;
    for (ptr = arr + 1; ptr < arr + size; ptr++) {
        if (*ptr > maxVal) maxVal = *ptr;
    }
    return maxVal;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int* ptr = arr; ptr < arr + n; ptr++) {
        cin >> *ptr;
    }

    int largest = findLargestElement(arr, n);
    cout << largest << endl;

    return 0;
}
