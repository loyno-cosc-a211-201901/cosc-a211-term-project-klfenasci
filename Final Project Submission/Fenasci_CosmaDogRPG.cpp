#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#ifdef _WIN32
#include <windows.h>
const char *CLEAR_SCREEN_COMMAND = "CLS";
#elif defined (__APPLE__)
const char *CLEAR_SCREEN_COMMAND = "clear";
#elif defined (__linux__)
const char *CLEAR_SCREEN_COMMAND = "clear";
#endif

void clear_the_screen () {
   system (CLEAR_SCREEN_COMMAND);
}

void pickchar(); //pick your character
void whereto(); //main turn - menu that lets you choose which function to go to
void southside(); //first location - learn who has gear and pick a weapon
void gasagasa(); //second location - learn where gear is and gain health
void intracoastalclub(); //third location - gear is here; fight function is in here
void fight(int &pHealth, int &bHealth); //fight function - user vs. computer
void youWin(); //last function that lets you exit game if you win

int name;
int input;

int main ()
{
   srand (time(NULL));

  clear_the_screen();
  cout << "Welcome to the Cosma Dog Quest" << endl;
  cout << "\n1. Enter" << endl;
  cout << "\n2. Exit" << endl;
  cout << "\n" << endl;
  cin >> input;

  switch (input)
  {
    case 1: //go to pick character
      clear_the_screen();
      cout << "\nYou have to get to the gig on time but oh no! Your gear has been stolen." << endl;
      cout << "\nYou need to get it back if the show is to go on." << endl;
      cout << "\n" << endl;
      system ("pause");

      pickchar();
      break;

    case 2: //exit
      exit(0);
      break;
  }
}

//Pick your character

void pickchar()
{
  clear_the_screen();
  cout << "\nPick your character: " << endl;
  cout << "\n1. Isaac Derr" << endl;
  cout << "\n2. Alli KB" << endl;
  cout << "\n3. Katy Fenasci" << endl;
  cout << "\n4. Grace Hawkins" << endl;
  cout << "\n" << endl;
  cin >> input;

  switch(input)
  {
    case 1: //Isaac Derr
      clear_the_screen();
      cout << "\nYou are Isaac Derr, trusty singer and guitarist of Cosma Dog." << endl;
      cout << "\nYou set out to get your band's gear back." << endl;
      cout << "\n" << endl;
      system ("pause");

      whereto();
      break;

    case 2: //Alli KB
      clear_the_screen();
      cout << "\nYou are Alli KB, trusty bassist of Cosma Dog." << endl;
      cout << "\nYou set out to get your band's gear back." << endl;
      cout << "\n" << endl;
      system ("pause");

      whereto();
      break;

    case 3: //Katy Fenasci
      clear_the_screen();
      cout << "\nYou are Katy Fenasci, trusty drummer of Cosma Dog." << endl;
      cout << "\nYou set out to get your band's gear back." << endl;
      cout << "\n" << endl;
      system ("pause");

      whereto();
      break;

    case 4: //Grace Hawkins
      clear_the_screen();
      cout << "\nYou are Grace Hawkins, trusty manager of Cosma Dog." << endl;
      cout << "\nYou set out to get your band's gear back." << endl;
      cout << "\n" << endl;
      system ("pause");

      whereto();
      break;
  }
}

//Main menu - where the user wants to go

void whereto()
{
  clear_the_screen();
  cout << "\nWhere do you want to go?" << endl;
  cout << "\n1. Southside Arts Center" << endl;
  cout << "\n2. Gasa Gasa" << endl;
  cout << "\n3. Intracoastal Club" << endl;
  cout << "\n4. Exit" << endl;
  cout << "\n" << endl;
  cin >> input;

  switch (input)
  {
    case 1:
      southside();
      break;

    case 2:
      gasagasa();

    case 3:
      intracoastalclub();

    case 4:
      exit(0);
      break;

  }
}

//First location
//User learns: who has gear
//User obtains: a weapon

void southside()
{
  clear_the_screen();
  cout << "\nAt South Side Arts Center, you find Get Your Gun Annie!" << endl;
  cout << "\nYou ask her if she knows where your gear is." << endl;
  cout << "\n" << endl;
  system("pause");

  clear_the_screen();
  cout << "\nI think Drain Bamage Benny has it. I'm not sure where he is though." << endl;
  cout << "\n" << endl;
  system("pause");

  clear_the_screen();
  cout << "\nI do know that he isn't going to give you your gear back without a fight." << endl;
  cout << "\nDo you want a weapon?" << endl;
  cout << "\n1. Yes" << endl;
  cout << "\n2. No" << endl;
  cout << "\n" << endl;
  cin >> input;

  switch (input)
  {
    case 1: //User wants a weapon
      clear_the_screen();
      cout << "\nWhat weapon do you want?" << endl;
      cout << "\n1. Beer bottle" << endl;
      cout << "\n2. Bar stool" << endl;
      cout << "\n3. Pool que" << endl;
      cout << "\n" << endl;
      cin >> input;

      switch(input)
      {
        case 1: //beer bottle
          clear_the_screen();
          cout << "\nYou chose a beer bottle! Great choice!" << endl;
          cout << "\nYou're ready to fight Drain Bamage Benny. Good luck!" << endl;
          cout << "\n" << endl;

          system("pause");
          whereto();
          break;

        case 2: //bar stool
          clear_the_screen();
          cout << "\nYou chose a bar stool! Great choice!" << endl;
          cout << "\nYou're ready to fight Drain Bamage Benny. Good luck!" << endl;
          cout << "\n" << endl;

          system("pause");
          whereto();
          break;

        case 3: //pool que
          clear_the_screen();
          cout << "\nYou chose a pool que! Great choice!" << endl;
          cout << "\nYou're ready to fight Drain Bamage Benny. Good luck!" << endl;
          cout << "\n" << endl;

          system("pause");
          whereto();
          break;
      }
    case 2: //User does not want a weapon
      clear_the_screen();
      cout << "\nOkay, well be expecting a fist fight then. Good luck." << endl;
      cout << "\n" << endl;
      system("pause");

      whereto();
  }
}

//Second location
//User learns: where the gear is
//User obtains: health

void gasagasa()
{
  clear_the_screen();
  cout << "\nAt Gasa Gasa, you find Drunk and Reeling Raymond!" << endl;
  cout << "\nYou ask him if he knows where your gear is." << endl;
  cout << "\n" << endl;
  system("pause");

  clear_the_screen();
  cout << "\nI think it's at the Intracoastal Club. I'm not sure who has it though." << endl;
  cout << "\n" << endl;
  system("pause");

  clear_the_screen();
  cout << "\nThat's a pretty long drive." << endl;
  cout << "\nYou're not going to have enough energy to fight for your gear." << endl;
  cout << "\nDo you want a beer for the road?" << endl;
  cout << "\n1. Yes" << endl;
  cout << "\n2. No" << endl;
  cout << "\n" << endl;
  cin >> input;

  switch (input)
  {
    case 1: //User wants a beer
      clear_the_screen();
      cout << "\nYou took a beer from Drunk and Reeling Raymond. " << endl;
      cout << "\nIt improved your health." << endl;
      cout << "\nYou're ready to go to the Intracoastal Club and fight the thief!" << endl;
      cout << "\nUnless you want to find out who your fighting first..." << endl;
      cout << "\n" << endl;

      system("pause");
      whereto();
      break;

    case 2: //User does not want a beer
      clear_the_screen();
      cout << "\nYour loss then. Good luck." << endl;
      cout << "\n" << endl;

      system("pause");
      whereto();
      break;

  }
}

//Third location
//User finds gear
//fight function in here

void intracoastalclub()
{
  int pHealth; //player health
  int bHealth; //benny's health
  int pDamage; //player damage
  int bDamage; //benny's damage
  int turn; //who goes first, comp vs. user

  clear_the_screen();
  cout << "\nAt the Intracoastal Club, you find Drain Bamage Benny with all your gear!" << endl;
  cout << "\nYou prepare to fight him!" << endl;
  cout << "\n" << endl;
  system("pause");

//health points
  pHealth = rand() % 40 + 80;
  bHealth = rand() % 20 + 40;

//who goes first: computer or user
  turn = rand() % 2;
  if (turn == 1)
  {
      clear_the_screen();
      cout << "\nDrain Bamage Benny goes first." << endl;
      cout << "\n ";
      system("pause");

      bDamage = rand() % 5 + 10;

      pHealth = pHealth - bDamage;
      clear_the_screen();
      cout << "\nDrain Bamage Benny attacks you for " << bDamage << " damage!" << endl;
      cout << "\n ";
      system("pause");
    }
  else
  {
      clear_the_screen();
      cout << "\n You have the first turn." << endl;
      cout << "\n ";
      system("pause");
  }

  fight(pHealth, bHealth);

}

//Fight function - from third location

void fight(int &pHealth, int &bHealth)
{
  int pDamage; //player damage
  int bDamage; //benny's damage

//damage points
  pDamage = rand() % 10 + 10;
  bDamage = rand() % 10 + 10;

  clear_the_screen();
  cout << "\n Your health: " << pHealth << endl;
  cout << "\n Drain Bamage Benny's health:  " << bHealth << endl;
  cout << "\n What do you want to do?" << endl;
  cout << "\n1. Attack!" << endl;
  cout << "\n2. Flee!" << endl;
  cout << "\n" << endl;
  cin >> input;
  switch (input)
  {

    case 1: //user attacks
    clear_the_screen();

    //user attacks DBB
    bHealth = bHealth - pDamage;
    cout << "\n You attack Drain Bamage Benny for " << bDamage << " damage!" << endl;
    cout << "\n ";
    system("pause");

    if (bHealth < 1)
    {
      clear_the_screen();
      cout << "\n You have killed Drain Bamage Benny!" << endl;
      cout << "\n ";
      system("pause");
      youWin();
    }

    //DBB attacks user
    pHealth = pHealth - bDamage;
    clear_the_screen();
    cout << "\n Drain Bamage Benny attacks you for " << pDamage << " damage!" << endl;
    cout << "\n ";
    system("pause");

    if (pHealth < 1)
    {
      clear_the_screen();
      cout << "\n You have been killed by Drain Bamage Benny!" << endl;
      cout << "\n ";
      system("pause");
      exit(0);
    }

    fight(pHealth, bHealth);

  case 2: //user flees
    clear_the_screen();
    cout << "You can't flee Drain Bamage Benny!" << endl;
    cout << "\n" << endl;
    system("pause");

    fight(pHealth, bHealth);
  }
}

//Exit game

void youWin()
{
  clear_the_screen();
  cout << "\nYou win! You get your gear back and get to the gig on time!" << endl;
  cout << "\nThanks for playing!" << endl;
  exit(0);
}
