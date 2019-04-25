#include <iostream>

using namespace std;

void whereto();
void intracoastalclub();
void gasagasa();
void southside();


int input;
int name;


int main ()
{
  system ("cls");
  cout << "Welcome to Cosma Dog" << endl;
  cout << "\n1. Enter" << endl;
  cout << "\n2. Exit" << endl;
  cout << "\n" << endl;
  cin >> input;

  switch (input)
  {
    case 1:
    system ("cls");
      cout << "\nYou have to get to the gig on time but oh no! Your gear has been stolen. You need to get it back if the show is to go on." << endl;
      cout << "\nBut first..." << endl;
      cout << "\n" << endl;
      system ("pause");



      system ("cls");
      cout << "\nPick your character: " << endl;
      cout << "\n1. Isaac Derr" << endl;
      cout << "\n2. Alli KB" << endl;
      cout << "\n3. Katy Fenasci" << endl;
      cout <<"\n" << endl;
      cin >> name;

      //How do I get it to say You have chosen name at the end?

      whereto();

    case 2:
      exit(0);
  }
}

void whereto()
{
  system ("cls");
  cout << "\nWhere do you want to go?" << endl;
  cout << "\n1. Intracoastal Club" << endl;
  cout << "\n2. Gasa Gasa" << endl;
  cout << "\n3. Southside Arts Center" << endl;
  cout << "\n" << endl;
  cin >> input;

  switch (input)
  {
    case 1:
    intracoastalclub();

    case 2:
    gasagasa();

    case 3:
    southside();
  }
}

void intracoastalclub()
{
  system ("cls");
  cout << "\nAt the Intracoastal Club, you find Drain Bamage Benny with your bass!" << endl;
}

void gasagasa()
{
  system ("cls");
  cout << "\nAt Gasa Gasa, you find Get Your Gun Annie with your guitar!" << endl;
}

void southside()
{
  system ("cls");
  cout << "\nAt Southside Art's Center, you find Drunk and Reeling Raymond with your drums!" << endl;
}
