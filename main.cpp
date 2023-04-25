#include <iostream>
using namespace std;

int main()
{
    int i = 3, j = ++i, k = ++i;
    // j: 4, k: 4, i: 3
    cin >> i;
    //    cout << 7, 1, 9
    cout << k + i << j - 1 << i * i;
}