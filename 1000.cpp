#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int z = 0;

    while (n >= 20) {
        n -= 20;
        z += 1;
    }

    while (n >= 10) {
        n -= 10;
        z += 1;
    }

    while (n >= 5) {
        n -= 5;
        z += 1;
    }

    while (n >= 1) {
        n -= 1;
        z += 1;
    }
    cout << z;
}