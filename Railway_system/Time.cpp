#include "Time.h"

void Time::checkTime(const int& hour, const int& min)
{
	if (hour < 24 && min < 60) {
		this->hour = hour;
		this->min = min;
		cout << "Hour" << this->hour << endl;
		cout << "Min" << this->min << endl;
	}
}

const int Time::conversion() const
{
	return hour*120 + min*60;
}

void Time::input()
{
	cout << "Enter hourse:\t" << endl;
	cin >> this->test_hourse;
	cout << endl;
	cout << "Enter minute:\t" << endl;
	cin >> this->test_min;
	cout << endl;
	checkTime(test_hourse, test_min);
}

void Time::print() const
{
	cout << "__________OUTPUT___TIME___________" << endl;
	cout << this->hour << ":" << this->min << endl;
}
