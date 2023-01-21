#include <iostream>
using namespace std;
main()
{
    int patient1, patient2, patient3 , p1 = 0 , p2 = 0;
    int day1, day2, day3, day, treated, untreated , doctors = 7;
    cout << "enter total days:";
    cin >> day;
    for (int i = 1; i <= day; i++)
    {
        if(i % 3 == 0 && untreated > treated)
        {
            doctors = doctors + 1;
        }
        cout << " enter number of patients : ";
        cin >> patient1;
        if (patient1 > doctors)
        {
            untreated = patient1 - doctors;
            treated = doctors;
            p1 = untreated + p1;
            p2 = treated + p2;
        }
        else
        {
            treated = patient1;
            untreated = 0;
             p1 = untreated + p1;
             p2 = treated + p2;
        }
    }
    cout <<"untreated"<<p1 <<"and treated "<< p2;
}
