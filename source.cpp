#include "playerinfo.h"
using namespace std;

int main()
{
	const int players = 3;
	PlayerInfo number[players];

	cout << "///////////////////// Soccer Scoreboard ///////////////////\n\n";

	for (int i = 0; i < players; i++)
	{
		cin >> number[i];
	}

	cout << endl;

	system("clear");

	cout << "The Score of the players are:" << endl;

	cout << endl;

	for (int i = 0; i < players; i++)
	{
		cout << number[i];
	}

	return 0;
}