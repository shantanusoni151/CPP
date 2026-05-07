#include <iostream>
using namespace std;

int main()
{
    int i, j, rows = 4;

    for(i = 1; i <= rows; i++)
    {
        // spaces (right alignment)
        for(j = 1; j <= rows - i; j++)
        {
            cout << "  ";
        }

        // stars
        for(j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}