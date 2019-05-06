#include <iostream>
using namespace std;

void ratcave();
void attackthief();
int input;

int main()
{
  cout << "Go to ratcave" << endl;
  ratcave();
}


void ratCave() {

    int pHealth;
    int pDamage;
    int tHealth;
    int tDamage;
    int turn;


    system("cls");
    cout << "\n Thief: I'm warning you, stranger. Leave now!" << endl;
    cout << "\n 1. I've come for my friend's sword." << endl;
    cout << "\n 2. Okay, okay, I'm leaving!" << endl;
    cout << "\n> ";
    cin >> input;
    switch (input) {

        case 1:
        system("cls");
        cout << "\n Ha! You won't be leaving with it!" << endl;
        cout << "\n ";
        system("pause");

        pHealth = rand() % 40 + 80;
        tHealth = rand() % 20 + 40;

        turn = rand() % 2;

        if (turn == 1) {
            system("cls");
            cout << "\n The thief has the first turn." << endl;
            cout << "\n ";
            system("pause");

            tDamage = rand() % 5 + 10;

            pHealth = pHealth - tDamage;
            system("cls");
            cout << "\n The thief attacks you for " << tDamage << " damage!" << endl;
            cout << "\n ";
            system("pause");

        }

        else {
            system("cls");
            cout << "\n You have the first turn." << endl;
            cout << "\n ";
            system("pause");
        }

        attackThief(pHealth, tHealth);

        case 2:
        system("cls");
        cout << "\n That's what I thought." << endl;
        cout << "\n ";
        system("pause");
        riverstead();

    }
}

void attackThief(int &pHealth, int &tHealth) {

    int pDamage;
    int tDamage;

    pDamage = rand() % 10 + 10;
    tDamage = rand() % 5 + 10;

    system("cls");
    cout << "\n Your health: " << pHealth << endl;
    cout << "\n Thief's health:  " << tHealth << endl;
    cout << "\n What would you like to do?" << endl;
    cout << "\n 1. Attack the thief" << endl;
    cout << "\n 2. Attempt to flee" << endl;
    cout << "\n> ";
    cin >> input;
    switch (input) {

        case 1:
        tHealth = tHealth - pDamage;
        system("cls");
        cout << "\n You attack the thief for " << pDamage << " damage!" << endl;
        cout << "\n ";
        system("pause");

        if (tHealth < 1) {
            system("cls");
            cout << "\n You have killed the thief!" << endl;
            cout << "\n ";
            system("pause");
            thiefDead();
        }

        pHealth = pHealth - tDamage;
        system("cls");
        cout << "\n The thief attacks you for " << tDamage << " damage!" << endl;
        cout << "\n ";
        system("pause");

        if (pHealth < 1) {
            system("cls");
            cout << "\n You have been killed by the thief!" << endl;
            cout << "\n ";
            system("pause");
            exit(0);
        }

        attackThief(pHealth, tHealth);

        case 2:
        system("cls");
        cout << "\n Your attempt to flee is unsuccessful." << endl;
        cout << "\n ";
        system("pause");
        attackThief(pHealth, tHealth);

    }
}
