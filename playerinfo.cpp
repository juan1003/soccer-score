#include "playerinfo.h"

PlayerInfo::PlayerInfo(string playerName, string playerNumber, int pointsScored)
{
	this->playerName = playerName;
	this->playerNumber = playerNumber;
	this->pointsScored = pointsScored;
}

PlayerInfo::PlayerInfo(const PlayerInfo & aPlayer)
{
	playerName = aPlayer.playerName;
	playerNumber = aPlayer.playerNumber;
	pointsScored = aPlayer.pointsScored;
}

void PlayerInfo::setName(string name)
{
	this->playerName = name;
}

void PlayerInfo::setNumber(string number)
{
	this->playerNumber = number;
}

void PlayerInfo::setPointScored(int points)
{
	this->pointsScored = points;
}

string PlayerInfo::getName() const
{
	return this->playerName;
}

string PlayerInfo::getNumber() const
{
	return this->playerNumber;
}

int PlayerInfo::getPoints() const
{
	return this->pointsScored;
}

istream & operator>>(istream & in, PlayerInfo & aPlayer)
{
	cout << "Enter the player name: ";
	in >> aPlayer.playerName;

	cout << "Enter a player number: ";
	in >> aPlayer.playerNumber;

	cout << "Enter the puntuation of the player: ";
	in >> aPlayer.pointsScored;

	cout << endl;

	return in;
}

ostream & operator<<(ostream & out, const PlayerInfo & aPlayer)
{
	out << "Player Name: " << aPlayer.getName() << endl;
	out << "Player Number: " << aPlayer.getNumber() << endl;
	out << "Points Scored: " << aPlayer.getPoints() << endl;

	cout << endl;

	return out;
}