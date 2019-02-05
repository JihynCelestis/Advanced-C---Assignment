#pragma once
#include "MonopolyHeader.hpp"
class CProperty :
	public CSquare
{
private:
	int mCost;
	int mRent;
	int mGroup;

public:
	CProperty(int code, std::string name, int cost, int rent, int group);
	void Display();
	~CProperty();
};
