#include <iostream>

using namespace std;

//++PROF+ANDREW:    please put a description of what each of these will be doing
void whereto();

//++PROF+ANDREW:    when you go to one of these, do you have anything like "hit points"
// or energy or weapons that you bring?
// add a parameter to each function saying which character you are
// maybe add a parameter for weapon also
// add a parameter for player's current health
void intracoastalclub();
void gasagasa();
void southside();

//++PROF+ANDREW:    you probably won't want these variables, at least not as global variables
int input;
int name;

//++PROF+ANDREW:    suggestions:
// constant int values for character ID
// corresponding constant string values for the character name

int main ()
{
  system ("cls"); //++PROF+ANDREW:    use "clear_the_screen.cpp"
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
      //++PROF+ANDREW:    cout << "\n" << ALLI_CHAR_NUMBER << ". " << ALLI_CHARACTER_NAME << endl;
      cout << "\n3. Katy Fenasci" << endl;
      cout <<"\n" << endl;
      cin >> name;

      //How do I get it to say You have chosen name at the end?

      whereto();//++PROF+ANDREW:    pass in the character stuff
//++PROF+ANDREW:    break;
    case 2:
      exit(0);
  }
}

void whereto() //++PROF+ANDREW:    this is your main game play - it's a "turn"
{
  system ("cls");
  cout << "\nWhere do you want to go?" << endl;
  cout << "\n1. Intracoastal Club" << endl;
  cout << "\n2. Gasa Gasa" << endl;
  cout << "\n3. Southside Arts Center" << endl;
  cout << "\n" << endl;
  cin >> input;
  //++PROF+ANDREW:

  switch (input)
  {
    case 1:
    intracoastalclub();
    //++PROF+ANDREW:    need "break"
    break;
    case 2:
    gasagasa();

    case 3:
    southside();
  }
}

//++PROF+ANDREW:    suggest a function for "fight"

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
