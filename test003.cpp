#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c, d, e;
    cin >> a;
    for (int i = 0; i < a; i++)

    {
        cin >> b >> c >> d >> e;
        int numbers[a] = {b, c, d, e};
        cout << numbers[3] << " " << numbers[2] << " " << numbers[1] << " " << numbers[0];

        return 0;
    }
}
