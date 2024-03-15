#include <iostream>
using namespace std;

int main() {
double x,y,z;
cin >> x >> y >> z;
int n = 2023 - x;
int m = 15 - y;
int i = 365.25 * n;
int e = 30.4375 * m;
int w = 42.4375 - z;
int o = i + e + w;
cout << o << endl;
}