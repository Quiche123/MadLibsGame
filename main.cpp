//Author:
#include <iostream>
#include <string>
using namespace std;

int main()
{
  // I. Variable declaration
    int appleCount;
    string friendName;
    double missingCash;
    bool willingShare;
    string shareString;
    string distraction;

  // II. Prompt the user for input and get their responses
    cout << "Enter a whole number: ";
    cin >> appleCount;
    cout << "Enter a first name: ";
    cin >> friendName;
    cout << "Enter a positive number: ";
    cin >> missingCash;
    cout << "Enter a boolean (0 for false, 1 for true): ";
    cin >> willingShare;
    if (willingShare) {
        shareString = "true";
    } else {
        shareString = "false";
    }
    cout << "Enter a noun: ";
    cin >> distraction;
    cin.ignore();
  
  // III. Display the mad lib story
    cout << "Today, I went to the store to buy " << appleCount << " apples, where I ran into my dear friend " << friendName << ".";
    cout << "They wanted to buy apples themselves, but were $" << missingCash << " short. While I did have extra cash, it was ";
    cout << shareString << " that I would be willing to give it up. Unfortunately, regardless of my wishes, they distracted me by pointing at a nearby ";
    cout << distraction << " and stole all my money, so I didn't even get to buy any apples.";

  return 0;
}
