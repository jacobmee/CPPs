#include <iostream>
using namespace std;

const int dayNum[] = {-1, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int m, offset, i, n;
int main()
{
        m = 1;
        n = 3;
        cout << "S\tM\tT\tW\tT\tF\tS" << endl;
        offset = n;
        for (i = 1; i < m; i++)
                offset = (offset + dayNum[i]) % 7;
        for (i = 0; i < offset; i++)
                cout << '\t';
        for (i = 1; i <= dayNum[m]; i++)
        {
                cout << i;
                if (i == dayNum[m] || (offset + i) % 7 == 0)
                        cout << endl;
                else
                        cout << '\t';
        }
        return 0;
}
