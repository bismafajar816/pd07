#include <iostream>
using namespace std;
int main()
{
    int num_of_inputs;

    float p1 = 0.0;
    float p2 = 0.0;
    float p3 = 0.0;

    float count_P1 = 0;
    float count_P2 = 0;
    float count_P3 = 0;

    cout << "Enter  number of cargo : ";
    cin >> num_of_inputs;
    int currentNumber = 0, sum = 0;
    for (int i = 0; i < num_of_inputs; i++)
    {

        cout << "Enter weight in tons:";
        cin >> currentNumber;
        sum = sum + currentNumber;

              if (currentNumber <= 3)
        {
            count_P1 = count_P1 + currentNumber;
        }
        if (currentNumber > 3 && currentNumber <= 11)
        {
            count_P2 = count_P2 + currentNumber;
        }
        if (currentNumber > 11)
        {
            count_P3 = count_P3 + currentNumber;
        }
    }
   
    p1 = (count_P1 * 200.0);
    p2 = (count_P2 * 175.0);
    p3 = (count_P3 * 120.0);
    float p01 = (count_P1 * 100) / sum;
    float p02 = (count_P2 * 100) / sum;
    float p03 = (count_P3 * 100) / sum;

    cout << "Output" << endl;
    cout << p01 << endl;
    cout << p02 << endl;
    cout << p03 << endl;
    int average = (p1 + p2 + p3) / sum;
    cout << "average price" << average;

    return 0;
}
