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
    
    int col = rows;
    for (int i = 1; i <= rows; i++)
    {   
        for (int j = 1 ; j <= col; j++)
        {
            cout << "*";
        }
        col--;
        cout << endl;
    }
}