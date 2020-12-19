#pragma once
#include "Train.h"
#include <vector>

class RailWay
{
public:
	void input();
	void print() const;
	void addTrain(const size_t& number, const string& destinationPlace, const Time& arriveTime);
	void editTrain(const size_t& index, const Time& arriveTime, const string& destinationPlace);
	void removeTrain(const int& index);
private:
	vector<Train> trains;
	Train tmp;
	int size;
};

