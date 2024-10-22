#pragma once

#include <iostream>
#include <string>

using namespace std;

class PlayerInfo
{
private:

	string playerName;
	string playerNumber;
	int pointsScored;

public:
	 //Constructors
	PlayerInfo() :playerName(""), playerNumber(""), pointsScored(0) {}
	PlayerInfo(string playerName, string playerNumber, int pointsScored);
	PlayerInfo(const PlayerInfo & aPlayer);

	//Destructor
	~PlayerInfo(){}

	//Setters
	void setName(string playerName);
	void setNumber(string playerNumber);
	void setPointScored(int pointsScored);

	//Getters
	string getName() const;
	string getNumber() const;
	int getPoints() const;

	//Operator Overloading
	friend istream & operator>>(istream & out, PlayerInfo & aPlayer);
	friend ostream & operator<<(ostream & out, const PlayerInfo & aPlayer);
};