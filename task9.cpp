
#include <iostream>
using namespace std;
void shape(int rows);
main()
{
    int rows;
    cout << "enter number of rows:";
    cin >> rows;

    shape(rows);
}
void shape(int rows)
{
    int stars = 1;
    int spaces = rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 1; j < spaces; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < spaces; j++)
        {
            cout << " ";
        }
        spaces--;
        for (int h = 1; h <= stars; h++)
        {
            cout << "*";
        }
        stars++;
        cout << endl;
    }
}