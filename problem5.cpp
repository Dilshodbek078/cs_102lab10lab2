#include <iostream>
using namespace std;

void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int size;
    cin >> size;

    int arr[size];
    for (int* ptr = arr; ptr < arr + size; ptr++) {
        cin >> *ptr;
    }

    reverseArray(arr, size);

    for (int* ptr = arr; ptr < arr + size; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;

    return 0;
}
