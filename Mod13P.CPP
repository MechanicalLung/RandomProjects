//Leading for Leaders project

#include <iostream>
#include <iomanip>

using namespace std;

int menu();

const double RON_BASE = 350.00,
             RON_LEAD = 100.00,
             RON_EQUIP = 40.00,
             MSCOTT_BASE = 1000.00,
             MSCOTT_LEAD = 100.00,
             COX_BASE = 400.00,
             COX_LODGE = 65.00,      //per day a person
             COX_LUXLODGE = 120.00,  //per day a person
             TONY_BASE = 700.00,
             TONY_EQUIP = 40.00;

int main()
{
   
    int answer;
   do
   {
       answer = menu();
       switch(answer)
       {
           case 1 :
       }
   }
    while(answer != 5);
    return 0;
    
    
    
    
    
}



int menu()
{
    int select;
    
    cout << "Leading for Leaders Menu Selection\n";
    cout << "==================================\n";
    cout << "1. The Ron Burgundy People Know Me Retreat\n";
    cout << "2. The Michael Scott World's Best Boss Retreat\n";
    cout << "3. Dr. Cox Presents Man Not Caring Retreat\n";
    cout << "4. Tony Johnson's I Really Don't Care Retreat\n";
    cout << "5. Exit\n\n";
    cout << "\tTo make a selection, input a number 1 - 5: ";
    cin >> select;
    while (select < 1 || select > 5)
    {
        cout << "This selection " << select << " is not a valid choice.\n";
        cout << "Please enter a number 1 - 5: ";
        cin >> select;
    }
    return select;
}
    
void burgundy()
{
    
}
