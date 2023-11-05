#include "quest3.h"
#include <iostream>
using namespace std;

class car {
private:
  static string carname;
  static string destination;
  string d;
  int posX;
  int posY;
  int totalDistance;
  int distance;
  char parkingpos;

public:
  car() {
    carname = "Vroom";
    destination = "Jean Augustine SS";
    posX = 0;
    posY = 0;
    totalDistance = 0;
    distance = 0;
  }
  void turn() {
    char mchoice;
    cout << "Please enter your car model: ";
    cin >> carname;
    cin.ignore();
    cout << "Please enter the name of your destination: ";
    getline(cin, destination);

    do {
      move();
      cout << "Have you reached your destination (Yes or No): ";
      cin >> mchoice;

    } while (mchoice == 'N' || mchoice == 'n');

    parking();
  }

  void move() {
    cout << "What direction would you like to go: ";
    cin >> d;
    if (d == "N" || d == "n") {
      cout << "Enter distance: ";
      cin >> distance;
      totalDistance += distance;
      posY = posY + distance;
      cout << "The total distance traveled is " << totalDistance << " M" << endl;
      cout << "Your Coordinate relative to your original position is (" << posX
           << "," << posY << ")" << endl;

    } else if (d == "S" || d == "s") {
      cout << "Enter distance: ";
      cin >> distance;
      totalDistance += distance;
      posY = posY - distance;
      cout << "The total distance traveled is " << totalDistance << " M" << endl;
      cout << "Your Coordinate relative to your original position is (" << posX
           << "," << posY << ")" << endl;

    } else if (d == "E" || d == "e") {
      cout << "Enter distance: ";
      cin >> distance;
      totalDistance += distance;
      posX = posX + distance;
      cout << "The total distance traveled is " << totalDistance << " M" << endl;
      cout << "Your Coordinate relative to your original position is (" << posX
           << "," << posY << ")" << endl;

    } else if (d == "W" || d == "w") {
      cout << "Enter distance: ";
      cin >> distance;
      totalDistance += distance;
      posX = posX - distance;
      cout << "The total distance traveled is " << totalDistance << " M" << endl;
      cout << "Your Coordinate relative to your original position is (" << posX
           << "," << posY << ")" << endl;
    }
  }

  void parking() {
    cout << "There are three parking lots A, B, and C" << endl;
    cout << "Which parking lot would you like to park in: ";
    cin >> parkingpos;

    if (parkingpos == 'A' || parkingpos == 'a') {
      cout << "You have parked in parking lot A:" << endl;
    } else if (parkingpos == 'B' || parkingpos == 'b') {
      cout << "You have parked in parking lot B:" << endl;
    } else if (parkingpos == 'C' || parkingpos == 'c') {
      cout << "You have parked in parking lot C:" << endl;
    }

    cout << "Car Name: " << carname << endl;
    cout << "The total distance traveled is " << totalDistance << " M" << endl;
    int mk;
    mk = totalDistance / 1000;
    cout << "Distance in km is: " << mk << " km" << endl;
    cout << "Your Coordinate relative to your original position is (" << posX
         << "," << posY << ")" << endl;
    cout << "You've arrived at: " << destination << endl;
  }
};

string car::carname;
string car::destination;

quest3::quest3() {
  car obj;
  char mchoice;
  obj.turn();
}

int main() {
  quest3 quest;
  return 0;
}
