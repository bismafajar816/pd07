#include <iostream>
using namespace std;
main()
{
    int number;
    int number1 = 0;
    int num2 = 0;
    cout << "enter number of dots: ";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        num2 = num2 + i;
    }
    cout << num2;
}