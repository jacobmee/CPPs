#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int k = 1; k < 10000; k++)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            // cout << n << "    ";
        }
        else if (n % 3 == 0)
        {
            n = n / 3;
            // cout << n << "    ";
        }
        else if (n % 5 == 0)
        {
            n = n / 5;
            // cout << n << "    ";
        }
    }
    if (n == 1)
    {
        cout << "Regular Number"
             << endl;
    }
    else
        cout << "Irregular Number"
             << endl;
}