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
             TONY_EQUIP = 40.00;     //per day a person

             
void burgundy();
void scott();
void cox();
void johnson();

int main()
{
   
    int answer;
   do
   {
       answer = menu();
       switch(answer)
       {
           case 1 : burgundy();
           break;
           case 2 : scott();
           break;
           case 3 : cox();
           break;
           case 4 : johnson();
           break;
           case 5 : cout << "Closing program. \n\n";
       }
   }
    while(answer != 5);
    return 0;
    
    
    
    
    
}



int menu()
{
    int select;
    
    cout << "\tLeading for Leaders Menu Selection\n";
    cout << "\t==================================\n";
    cout << "1. The Ron Burgundy People Know Me Retreat\n";
    cout << "2. The Michael Scott World's Best Boss Retreat\n";
    cout << "3. Dr. Cox Presents Man Not Caring Retreat\n";
    cout << "4. Tony Johnson's I Really Don't Care Retreat\n";
    cout << "5. Exit\n\n";
    cout << "To make a selection, input a number 1 - 5: ";
    cin >> select;
    cout << "\n\n";
    while (select < 1 || select > 5)
    {
        cout << "This selection " << select << " is not a valid choice.\n";
        cout << "Please enter a number 1 - 5: ";
        cin >> select;
        cout << "\n\n";
    }
    return select;
}
    
void burgundy()
{
    int NumPE,
        NumL;

    double  B_CHARGE,
            E_CHARGE,
            L_CHARGE,
            CHARGE;

             cout << "\tThe Ron Burgundy People Know Me Retreat\n";
             cout << "\t========================================\n\n";
             cout << "How many people are in the group: ";
             cin >> NumPE;
             if(NumPE <= 0)
             {
                cout << "Invalid Selection, please enter a number greater than 0: ";
                cin >> NumPE;
             }
             cout << "\n";
             cout << "How many will require leadership instruction: ";
             cin >> NumL;
             cout << "\n\n";
             while(NumL > NumPE || NumL <= 0)
             {

                cout << "Invalid number. Please enter a number 1 - " << NumPE << ": ";
                cin >> NumL;
                cout << "\n\n";
             }

B_CHARGE = NumPE * RON_BASE;
E_CHARGE = NumPE * RON_EQUIP;               
L_CHARGE = NumL * RON_LEAD;
CHARGE = B_CHARGE + L_CHARGE + E_CHARGE;



cout << "There are " << NumPE << " people in the party." << endl;
cout << "The charges for the base is, $" << B_CHARGE << " and the required equipment is, $" << E_CHARGE << endl;
cout << "There is an additional $" << L_CHARGE << " for the people requiring leadership.\n";
cout << "The total charge is $" << CHARGE << "\n\n";

}

void scott()
{
    int NumPE,
        NumL;

    double  B_CHARGE,
            L_CHARGE,
            CHARGE;

             cout << "\tThe Michael Scott World's Best Boss Retreat\n";
             cout << "\t===========================================\n\n";
             cout << "How many people are in the group: ";
             cin >> NumPE;
             if(NumPE <= 0)
             {
                cout << "Invalid Selection, please enter a number greater than 0: ";
                cin >> NumPE;
             }
             cout << "\n";
             cout << "How many will require leadership instruction: ";
             cin >> NumL;
             cout << "\n\n";
             while(NumL > NumPE || NumL <= 0)
             {

                cout << "Invalid number. Please enter a number 1 - " << NumPE << ": ";
                cin >> NumL;
                cout << "\n\n";
             }

B_CHARGE = NumPE * MSCOTT_BASE;
L_CHARGE = NumL * MSCOTT_LEAD;
CHARGE = B_CHARGE + L_CHARGE;

cout << "There are " << NumPE << " people in the party." << endl;
cout << "The charges for the base, and required equipment is, $" << B_CHARGE << endl;
cout << "There is an additional $" << L_CHARGE << " for the people requiring leadership.\n";
cout << "The total charge is $" << CHARGE << "\n\n";

}

void cox()
{
int NUM_P,
    NUM_L,
    NUM_LUX,
    LDAYS,
    LUXDAYS;

    char answer;

double BCHARGE,
       LODGING,
       LUX_LODGE,
       CHARGE;

       cout << "\tDr.Cox Presents Man Not Caring Retreat\n";
       cout << "\t======================================\n\n";
      
       do{ 
       cout << "How many people are in the group: ";
       cin >> NUM_P;
       cout << endl;
       if(NUM_P <= 0)
       {
        cout << "Please enter in a number greater than 0: ";
        cin >> NUM_P;
       }
       }while(NUM_P <= 0);
       
       cout << "There is normal lodging, and luxury lodging.\n";
       cout <<  "How many people will be doing normal lodging: ";
       cin >> NUM_L;
       
       if(NUM_L > NUM_P || NUM_L <=0)
       {
            cout << "Please enter in a number from 1 to " << NUM_P << " :";
            cin >> NUM_L;
       }
       cout << "For how many days will lodging be required: ";
       cin >> LDAYS;
       if(LDAYS <= 0)
       {
        cout << "Please enter in a valid amount of days: ";
        cin >> LDAYS;
       }
       
       
       if(NUM_L != NUM_P)
       {
            
            cout << "Will the remaining guest in the group be in luxury lodging? (Y/N): ";
            cin >> answer;
            if(toupper(answer) == 'Y')
            {
            NUM_LUX = NUM_P - NUM_L;

            cout << "How many days will luxury lodging be required: ";
            cin >> LUXDAYS;
            while(LUXDAYS <= 0)
            {
                cout << "Please enter in a valid amount of days: ";
                cin >> LUXDAYS; 
            }
            }
       }
            
        

            

            BCHARGE = COX_BASE * NUM_P;
            LODGING = (NUM_L * COX_LODGE) * LDAYS;
            LUX_LODGE = (NUM_LUX * COX_LUXLODGE) * LUXDAYS;
            if(toupper(answer) == 'Y')
            {
            CHARGE = BCHARGE + LODGING + LUX_LODGE;
            }
            else
            CHARGE = BCHARGE + LODGING;

        cout << "There are " << NUM_P << " in the group.\n";
        cout << "The base charge is $" << BCHARGE << endl;
        cout << "The charge for the lodging is $" << LODGING << endl;
        if(toupper(answer) == 'Y')
        {
            cout << "The charge for the luxury lodging is $" << LUX_LODGE << endl;
        }
        cout << "The total charge is $" << CHARGE << "\n\n";


    }



void johnson()
{
int NUM_G,
    NUM_E,
    EDAYS;

    char answer;

double BCHARGE,
       ECHARGE,
       CHARGE;

       cout << "\tTony Johnson's I Really Don't Care Retreat\n";
       cout << "\t==========================================\n\n";
      
       do{ 
       cout << "How many people are in the group: ";
       cin >> NUM_G;
       cout << endl;
       while(NUM_G <= 0)
       {
        cout << "Please enter in a number greater than 0: ";
        cin >> NUM_G;
       }
       }while(NUM_G <= 0);
       
       cout << "How many people require equipment: ";
       cin >> NUM_E;
       
       if(NUM_E > NUM_G || NUM_E <=0)
       {
            cout << "Please enter in a number from 1 to " << NUM_G << " :";
            cin >> NUM_E;
       }
       do{
       cout << "How many days will the equipment be needed for: ";
       cin >> EDAYS;
       if(EDAYS <= 0)
       {
        cout << "Please enter in a valid amount of days: ";
        cin >> EDAYS;
       }
       } while(EDAYS <= 0);
       if(NUM_E != NUM_G)
       {
            
            cout << "Do the remaining guest in the group have their own equipment? (Y/N): ";
            cin >> answer;
            if(toupper(answer) == 'N')
            {
                cout << "Remind guest, equipment is required, and will be added to the total charge at the normal rate.\n";
                NUM_E = NUM_G;
            }
       }

            BCHARGE = TONY_BASE * NUM_G;
           ECHARGE = (NUM_E * TONY_EQUIP) * EDAYS;
            CHARGE = BCHARGE + ECHARGE;

        cout << "There are " << NUM_G << " in the group.\n";
        cout << "The base charge is $" << BCHARGE << endl;
        cout << "The charge for the equipment is $" << ECHARGE << endl;
        cout << "The total charge is $" << CHARGE << "\n\n";

  
}
