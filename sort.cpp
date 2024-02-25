#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-1, 3, 9, 11, 20, 71, 30, 91, 51, 0, 3, 3, 81};
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < (13 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            cout << arr[j] << "  ";
        }
        cout << endl;
    }
    for (int i = 0; i < 13; i++)
    {
        cout << arr[i] << "  ";
    }
}
