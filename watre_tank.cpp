#include <iostream>

using namespace std;
int main()
{
    double capacity = 3000, current = 0;
    while (true)
    {
        cout<<"Currently we have "<< current <<endl;
        char command;
        cin >> command;
        if (command == 'x')
            break;
        else if (command == '+')
        {
            double q;
            cin >> q;
            current = current + q;
            if (current > capacity)
            {
                cout << "Wasted " << current - capacity << endl;
                current = capacity;
            }
        }
        else if (command =='-')
        {
            double q;
            cin >> q;
            if (q > current)
            {
                cout << "Giving " << current << endl;
                current = 0;
            }
            else{
                cout<<"Giving "<<q<<endl;
                current=current-q;
            }
        }
        else{
            cout<<"Invalid Command"<<command<<endl;
        }
    }
    return 0;
}