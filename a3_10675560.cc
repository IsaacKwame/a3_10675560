#include <iostream>
using namespace std;

int main()
{

    int UserScore;
    cout << "Enter your score: ";
    cin  >> UserScore;
    if(UserScore>100||UserScore<=-1)
    {
        cout << "Invalid value!!!";

    if (UserScore > 79&& UserScore < 101)
    {
        cout<< "Your grade is: A.";
    }

    else if (UserScore > 74 && UserScore < 80)
    {
        cout<< "Your grade is: B+";
    }

    else if (UserScore> 69 && UserScore < 75)
    {
        cout<<"Your grade is: B";
    }

    else if (UserScore > 64 && UserScore< 70)
    {
        cout<<"Your grade is: C+";
    }

    else if (UserScore > 59&& UserScore < 65)
    {
        cout<<"Your grade is: C";
    }
    else if (UserScore > 54&& UserScore <60)
    {
        cout <<"Your grade is: D+";
    }
    else if (UserScore > 49&& UserScore <55)
    {
        cout<<"Your grade is: D";
    }
    else if (UserScore >=0&& UserScore <50)
    {
        cout<<"Your grade is: F";
    }
        }

    return 0;
}
