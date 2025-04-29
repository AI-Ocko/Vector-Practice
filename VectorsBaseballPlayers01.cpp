/*
vecList[index] returns the element at the position specified by index. 
vecList.front() retrun the first element
vecList.back() return the last element
vecList.clear() deletes all elements from the object
vecList.push_back(elem) a copy of elem is inserted into vecList at the end
vecList.pop_back() delete the last element of vecList
vecList.empty() return true if the object vecList is empty and false otherwise.
vecList.size() return the number of elements currently in the object vecList
vecList.max_size() return the max number of elements that can be inserted into the object. 
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
    //declarations
    vector<int> playerNumbers;
    vector<string> playerNames;
    vector<bool> playerAvailable;

    int numOfPlayers;
    int countPlayers;
    int num;
    string name;
    char playingToday = 'N';
    bool isAvailable;
    bool isNotAvailable = true;

    //get user input
    cout << "How many players are on the team? ";
    cin >> numOfPlayers;

    //calculations
    for (countPlayers = 0; countPlayers < numOfPlayers; countPlayers++)
    {
        cout << "What is player " << countPlayers + 1 << "'s name?: ";
        cin >> name;
        playerNames.push_back(name);

        cout << "What is player " << playerNames[countPlayers] << "'s number?: ";
        cin >> num;
        playerNumbers.push_back(num);

        cout << "Is " << playerNames[countPlayers] << " playing today? (Y/N): ";
        cin >> playingToday;

        if (playingToday == 'Y' || playingToday == 'y') 
        {
            playerAvailable.push_back(true);
        }
        else
        {
            playerAvailable.push_back(false);
        }
    }

    //output
    for (countPlayers = 0; countPlayers < numOfPlayers; countPlayers++)
    {
        cout << playerNames[countPlayers] << "'s jersey number is " << playerNumbers[countPlayers] << " and he is ";

        if (playerAvailable[countPlayers] == true)
        {
            cout << "playing today.";
        }
        else 
        {
            cout << "not playing today.";
        }

        cout << endl;
    }

    system ("pause");
    return 0;
}