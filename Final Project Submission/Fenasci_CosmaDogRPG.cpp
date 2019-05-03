#include <iostream>

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

//++PROF+ANDREW:    please put a description of what each of these will be doing
void whereto();
void intracoastalclub();
void fight();
void youWin();

int name;
int input;

//++PROF+ANDREW:    suggestions:
// constant int values for character ID
// corresponding constant string values for the character name

int main ()
{

  clear_the_screen(); //++PROF+ANDREW:    use "clear_the_screen.cpp"
  cout << "Welcome to the Cosma Dog Quest" << endl;
  cout << "\n1. Enter" << endl;
  cout << "\n2. Exit" << endl;
  cout << "\n" << endl;
  cin >> input;

  switch (input)
  {
    case 1:
    clear_the_screen();
      cout << "\nYou have to get to the gig on time but oh no! Your gear has been stolen. You need to get it back if the show is to go on." << endl;
      cout << "\nYou are Isaac Derr, trusty singer and guitarist of Cosma Dog. With only a broken beer bottle as a weapon, you set out to get your band's gear back." << endl;
      cout << "\n" << endl;
      system ("pause");

      whereto();
      break;

    case 2:
      exit(0);
      break;
  }
}

void whereto() //++PROF+ANDREW:    this is your main game play - it's a "turn"
{
  clear_the_screen();
  cout << "\nWhere do you want to go?" << endl;
  cout << "\n1. Intracoastal Club" << endl;
  cout << "\n2. Exit" << endl;
  cout << "\n" << endl;
  cin >> input;

  switch (input)
  {
    case 1:
      intracoastalclub();
      break;

    case 2:
      exit(0);
      break;

  }
}

void intracoastalclub()
{
  int pHealth;
  int bHealth;
  int pDamage;
  int bDamage;
  int turn;

  clear_the_screen();
  cout << "\nAt the Intracoastal Club, you find Drain Bamage Benny with your bass!" << endl;
  cout << "\nYou prepare to fight him!" << endl;
  system("pause");

  pHealth = rand() % 40 + 80;
  bHealth = rand() % 20 + 40;

  turn = rand() % 2;

  if (turn == 1) {
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

  else {
      clear_the_screen();
      cout << "\n You have the first turn." << endl;
      cout << "\n ";
      system("pause");
  }

  fight(pHealth, bHealth);

}

void fight(int &pHealth, int &bHealth)
{
  int pDamage;
  int bDamage;

  pDamage = rand() % 10 + 10;
  bDamage = rand() % 5 + 10;

  bHealth = bHealth - pDamage;

  cout << "\n Your health: " << pHealth << endl;
  cout << "\n Drain Bamage Benny's health:  " << bHealth << endl;
  system ("pause");

  cout << "\n You attack Drain Bamage Benny for " << bDamage << " damage!" << endl;
  cout << "\n ";
  system("pause");

  if (bHealth < 1) {
    cout << "\n You have killed Drain Bamage Benny!" << endl;
    cout << "\n ";
    system("pause");
    youWin();

    pHealth = pHealth - bDamage;
    cout << "\n Drain Bamage Benny attacks you for " << bDamage << " damage!" << endl;
    cout << "\n ";
    system("pause");

    if (pHealth < 1) {
      cout << "\n You have been killed by Drain Bamage Benny!" << endl;
      cout << "\n ";
      system("pause");
      exit(0);
    }
  fight(pHealth, bHealth);

}

void youWin()
{
  cout << "\nYou have saved all the gear! Congratulations!" << endl;
  cout << "\nThank you for playing Cosma Dog Quest!" << endl;
  exit(0);
}
