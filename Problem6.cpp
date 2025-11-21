#include <iostream>
using namespace std;

void findMinMax(const int* arr, int size, int& minVal, int& maxVal) {
    minVal = maxVal = *arr;
    for (const int* ptr = arr + 1; ptr < arr + size; ptr++) {
        if (*ptr < minVal) minVal = *ptr;
        if (*ptr > maxVal) maxVal = *ptr;
    }
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int* ptr = arr; ptr < arr + size; ptr++) {
        cin >> *ptr;
    }

    int minVal, maxVal;
    findMinMax(arr, size, minVal, maxVal);
    cout << "min=" << minVal << endl;
    cout << "max=" << maxVal << endl;

    return 0;
}
