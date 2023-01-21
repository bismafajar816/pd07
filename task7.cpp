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

    
    cout<<"Enter Input Count: ";
    cin>>num_of_inputs;
    for (int i = 0; i < num_of_inputs; i++) 
    {
        int currentNumber = 0;
        cout<<"Enter Current Number:"<<endl;
        cin>>currentNumber;
        if (currentNumber % 2 == 0)
        {
            count_P1++;
        }
        if (currentNumber % 3 == 0)
        {
            count_P2++;
        }
        if (currentNumber % 4 == 0)
        {
            count_P3++;
        }
    
    }

    p1 = (count_P1 * 100.0) / num_of_inputs;
    p2 = (count_P2 * 100.0) / num_of_inputs;
    p3 = (count_P3 * 100.0) / num_of_inputs;
    
    cout<<"Output"<<endl;
    cout<<(p1)<<"%age of numbers divided by 2"<<endl;
    cout<<(p2)<<"%age of numbers divided by 3"<<endl;
    cout<<(p3)<<"%age of numbers divided by 4"<<endl;
    

    return 0;
}