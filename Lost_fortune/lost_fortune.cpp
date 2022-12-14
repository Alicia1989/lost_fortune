// Lost Fortune
// A personalized adventure.

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main() {
    const int GOLD_PIECES = 900;
    int adventurers, killed, survivors;
    string leader;

    //get the information.
    cout << "welcome to Lost Fortune\n\n";
    cout << "Please enter the following for your personalized adventure\n";

    cout << "Enter a number: ";
    cin >> adventurers;

    survivors = adventurers - killed;

    cout << "Enter your last name: " ;
    cin >> leader;

    //Tell the story.
    cout << "\nA brave group of " << adventurers << " set out on a quest ";
    cout << "- in search of the lost treasure of the Ancient Dwarves.";
    cout << "The group was led by that legendary rogue, " << leader << ".\n";

    cout << "\nAlong the way, a band of maraunding ogres ambushed the party. ";
    cout << "All fought braverly under the comand of " << leader;
    cout << ", and the ogres were defeated, but at a cost...";
    cout << "leaving just " << survivors << " in the group.\n";
    cout << "\nThe party was about to give up all hope.";
    cout << "But while laying the deceased to rest, ";
    cout << "the stumbled upon the buried fortune.";
    cout << "So the adventurers split " << GOLD_PIECES << " gold pieces. ";
    cout << leader << " help on to the extra " << (GOLD_PIECES % survivors);
    cout << " pieces to keep things fair of course.\n";

    return 0;
}