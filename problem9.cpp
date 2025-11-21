#include <iostream>
using namespace std;

void factorial(int n, int *fact) {
    *fact = 1;
    for (int i = 1; i <= n; i++) {
        *fact *= i;
    }
}

int main() {
    int n;
    cin >> n;
    int fact;
    factorial(n, &fact);
    cout << fact << endl;
    return 0;
}
