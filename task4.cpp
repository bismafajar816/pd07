#include <iostream>
using namespace std;
void sequence(int number);
main()
{
    int number;
    cout << "enter number: ";
    cin >> number;

    // void sequence(int number)
    // {
    int multiply;
    int num , num2;
    for (int i = 1; i <= number; i++)
    {
       if(i % 4 == 0)
       {
        cout << i*10<< " , ";
       }
       else
       {
        cout << i << " , " ;

       }
      
    }
     
     
}
