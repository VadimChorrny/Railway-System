#pragma once
#include <string>
#include <iostream>
#include "Time.h"
#include "RailWay.h"

using namespace std;

class Train
{
public:
	//change
	Train(const size_t& number, const string& destinationPlace, const Time& arriveTime);
	void input();
	void print() const;
	bool operator <(const Train& other)const;
private:
	friend class RailWay;
	size_t number;
	string destinationPlace;
	Time arriveTime;
};	

