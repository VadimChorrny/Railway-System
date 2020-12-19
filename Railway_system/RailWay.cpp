#include "RailWay.h"

void RailWay::input()
{
	cout << "_____INPUT___RAILWAY____" << endl;
	cout << endl;
	cout << "Enter size:\t" << endl;
	cin >> size;
	for (size_t i = 0; i < size; i++)
	{
		tmp.input();
		trains.push_back(tmp);

	}
}

void RailWay::print() const
{
	tmp.print();
}

void RailWay::addTrain(const size_t& number, const string& destinationPlace, const Time& arriveTime)
{
	trains.push_back(Train(number, destinationPlace, arriveTime));
}

void RailWay::editTrain(const size_t& index, const Time& arriveTime, const string& destinationPlace)
{
	trains[index].arriveTime = arriveTime;
	trains[index].destinationPlace = destinationPlace;
}

void RailWay::removeTrain(const int& index)
{
	trains.erase(trains.begin() + index);
}
