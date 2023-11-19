#include <iostream>

#include <ctime>

#include <cstdlib>

using namespace std;

 

class Die {

  private:

    int sides;

    int value;

 

  public:

    Die(int numSides) {

      sides = numSides;

    }

    void setSides(int s) {

      sides = s;

    }

    void roll() {

      value = 1 + rand() % 6;

    }

    int getSides() {

      return sides;

    }

    int getValue() {

      return value;

    }

};

 

using namespace std;

 

int main() {

  int userPoints = 0;

  int computerPoints = 0;

  srand((unsigned) time(0));

  Die d1(6), d2(6);

  cout << "Let's Play a game of 21!";

  cout << "\n\n---------------------------------------\n";

  while(userPoints <= 21) {

    char choice;

    int rolled;

    cout << "\nWould you like to roll the dice?";

    cout << "\nPress Y fro yes N for no: ";

    cin >> choice;

    if(choice == 'Y' || choice == 'y') {

      d1.roll();

      rolled = d1.getValue();

      // Computer rolled

      computerPoints += rolled;

 

      d2.roll();

      int rolled = d2.getValue();

      cout << "\nYou have " << rolled << " points." << endl;

      userPoints += rolled;

    } else {

      break;

    }

  }

  cout << "\n\n---------------------------------------\n";

  cout << "Computer had " << computerPoints << " points" << endl;

  cout << "You had " << userPoints << " points" << endl;

  if((userPoints > 21 && computerPoints > 21) || (userPoints == computerPoints)) {

    cout << "Its a tie. No one wins" << endl;

  } else if(userPoints > 21) {

    cout << "Computer won!" << endl;

  } else if(computerPoints > 21) {

    cout << "Player won!" << endl;

  } else if(userPoints > computerPoints) {

    cout << "Player won!" << endl;

  } else if(computerPoints > userPoints) {

    cout << "Computer won!" << endl;

  }

}