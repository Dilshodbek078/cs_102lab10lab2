#include <iostream>
using namespace std;

void swapNums(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5, b = 10;

    cout << "Before swap: a=" << a << ", b=" << b << endl;

    swapNums(&a, &b); 

    cout << "After swap: a=" << a << ", b=" << b << endl;

    return 0;
}
