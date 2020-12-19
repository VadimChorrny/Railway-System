#include "Train.h"

Train::Train(const size_t& number, const string& destinationPlace, const Time& arriveTime)
	:number(number), destinationPlace(destinationPlace),arriveTime(arriveTime)
{
}

void Train::input()
{
	cout << "_____INPUT TRAIN____" << endl;
	cout << "Enter number train:\t" << endl;
	cin >> this->number;
	cout << "Enter place:\t" << endl;
	cin >> this->destinationPlace;
	cout << endl;
	arriveTime.input();
	cout << endl;

}

void Train::print() const
{
	cout << "________TRAIN__OUTPUT_______" << endl;
	cout << "Number train:\t" << number << endl;
	cout << "Place:\t" << destinationPlace << endl;
	cout << endl;
	arriveTime.print();
}

bool Train::operator<(const Train& n) const
{
	return arriveTime.conversion() < arriveTime.conversion();
}
