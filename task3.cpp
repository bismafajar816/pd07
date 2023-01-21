#include <iostream>
using namespace std;
void shape(int rows);
void lowshape(int rows);
main()
{
    int rows;
    cout << "enter number of rows:";
    cin >> rows;

    shape(rows);
    lowshape(rows);
}
void shape(int rows)
{
    int spaces = rows;
    int stars = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= spaces; j++)
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
void lowshape(int rows)
{
    int spaces = 1;
    int stars = rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        spaces++;
        for (int h = 1; h <= stars; h++)
        {
            cout << "*";
        }
        stars--;

        cout << endl;
    }
}