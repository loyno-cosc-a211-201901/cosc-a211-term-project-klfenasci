#include <iostream>

using namespace std;

int main()
{
  int pHealth;
  int pDamage;
  int bHealth;
  int bDamage;

  pHealth = rand() % 40 + 80;
  bHealth = rand() % 20 + 40;

  cout << "\n Your health: " << pHealth << endl;
  cout << "\n Thief's health:  " << bHealth << endl;

  bHealth =- pDamage;

  cout << "\n You attack Drain Bamage Benny for " << bDamage << " damage!" << endl;
      cout << "\n ";
      system("pause");

      if (bHealth < 1) {
          cout << "\n You have killed the thief!" << endl;
          cout << "\n ";
          system("pause");

    pHealth = pHealth - bDamage;
    cout << "\n Drain Bamage Benny attacks you for " << bDamage << " damage!" << endl;
    cout << "\n ";
    system("pause");

          if (pHealth < 1) {
              cout << "\n You have been killed by the thief!" << endl;
              cout << "\n ";
              system("pause");
              exit(0); }
            }
            attackThief(pHealth, bHealth);
          }
