#include <iostream>

using namespace std;
int yi(int a , int b)
{
    int c = a * 36;
    return c;
}
int main()
{
    int x, y;
    int z;
    cout << "Enter yard value"<<endl;
    cin >>x;
    
    z = yi(x, y);

    cout << z << endl;
    return 0;
}