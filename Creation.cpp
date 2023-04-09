//
//  main.cpp
//  CharacterCreation
//
//  Created by Alex on 4/9/23.
//

#include <iostream>
#include <random>
#include <cstring>
#include <cmath>
#include <cctype>

const int StatNum = 6;
const double minDice = 1;
const double maxDice = 6;
const std::string StatNames[StatNum] = {"Strength", "Dexterity", "Constitution", "Intelligence", "Wisdom", "Charisma"};

int MainMenu();
void CharCreation();
void Continue();
int getStats();
void StatCreation(int[], int[]);

int main()
{
    int *CharStats[StatNum], *HoldStats[StatNum];
    
   
    
    for(int i = 0; i < StatNum; i++)
    {
        StatCreation(HoldStats[i],CharStats[i]);
    }
    
    
   // int Answer;
   // do
   // {
      //  Answer = MainMenu();
       // switch(Answer)
        //{
          //  case 1 : CharCreation();
          //      break;
          //  case 2 : Continue();
    //            break;
          //  case 3 : std::cout << "Exiting to Desktop\n\n";
     //   }
            
 //   }while(Answer != 3);
    
    
   
    return 0;
}








void CharCreation()
{
    std::random_device DiceRoll;
    std::uniform_int_distribution<int> DiceValue(minDice, maxDice);
    int a, b, c, total, StatArr[StatNum], HoldArr[StatNum];
    char ANS;
    
    std::cout << "****************Character Creation****************\n\n\n";
    std::cout << "Shall we begin with the rolling of dice? Y/N: ";
    std::cin >> ANS;
    std::cout << "\n";
    
    if(::toupper(ANS) == 'Y')
    {
        std::cout << "Let's start with you rolling your dice!\n";
        for(int i = 0; i < StatNum; i++)
        {
            a = DiceValue(DiceRoll);
            std::cout << "Your first roll rolled " << a << ".\n";
            b = DiceValue(DiceRoll);
            std::cout << "Your second roll rolled " << b << ".\n";
            c = DiceValue(DiceRoll);
            std::cout << "Your third roll rolled " << c << ".\n\n";
            total = a+b+c;
            std::cout << "The total is " << total << ".\n";
            HoldArr[i] = total;
            std::cout << "\n\n";
        }
        std::cout << "Alright, let's go ahead and assign these to a stat!\n\n";
        for(int i = 0; i < StatNum; i++)
        {
            int stANS;
            std::cout << "What do you want to assign " << HoldArr[i] << " to?\n";
            std::cout << "1. Strength\n2. Dexterity\n3. Constitution\n4. Intelligence\n5. Wisdom\n6. Charisma\n\n";
            std::cout << "Please select an answer 1-5: ";
        std::cin >> stANS;
            StatArr[stANS-1] = HoldArr[i];
            
        }
        
    }
    else
        std::cout << "Alright, back to the Main Menu!\n\n";
    }

int MainMenu()
{
    int Select;
    
    std::cout << "\t\tAlex's First Adventure Game\t\t\n";
        std::cout << "\t1. New Game\n";
        std::cout << "\t2. Load Game\n";
        std::cout << "\t3. Exit to Desktop\n\n";
    std::cout << "Make a selection of 1-3: ";
    std::cin >> Select;
    return Select;
    
}

void Continue()
{
    std::string answer;
        std::cout << "This is a placeholder.\n\nWould you like to go back to the Main Menu? Y/N: ";
        std::cin >> answer;
}

int getStats()
{
    std::random_device DiceRoll;
    std::uniform_int_distribution<int> DiceValue(minDice, maxDice);
    int a, b, c, total;
    
    
    
 
  
        std::cout << "Rolling your dice now.\n";
            a = DiceValue(DiceRoll);
            std::cout << "Your first roll rolled " << a << ".\n";
            b = DiceValue(DiceRoll);
            std::cout << "Your second roll rolled " << b << ".\n";
            c = DiceValue(DiceRoll);
            std::cout << "Your third roll rolled " << c << ".\n\n";
            total = a+b+c;
            std::cout << "The total is " << total << ".\n";
    return total;
        
}

void StatCreation(int VHoldStats[], int VCharStats[])
{
    for(int i = 0; i < StatNum; i++)
    {
        VHoldStats[i] = getStats();
    }
    
    std::cout << "Time to assign the stats!\n\n";
    
    for(int i = 0; i < StatNum; i++)
    {
        int StatAns;
        
            std::cout << "What do you want to assign " << VHoldStats[i] << " to?\n";
            std::cout << "1. Strength\n2. Dexterity\n3. Constitution\n4. Intelligence\n5. Wisdom\n6. Charisma\n\n";
            std::cout << "Please select an answer 1-6: ";
            std::cin >> StatAns;
        while(StatAns <= 0 || StatAns > 6)
        {
            std::cout << "Invalid selection, please choose 1-6 you asshole! ----> ";
            std::cin >> StatAns;
        }
        VCharStats[StatAns-1] = VHoldStats[i];
            
        }
    
    std::cout << "Displaying Stats now!\n\n";
    
    for(int i = 0; i < StatNum; i++)
    {
        std::cout << StatNames[i] << ": " << VCharStats[i] << std::endl;
    }
}
