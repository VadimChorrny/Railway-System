#pragma once
#include <iostream>

using namespace std;

class Time
{
public:

	void checkTime(const int& hour, const int& min);
	const int conversion() const;
	void input();
	void print() const;

private:
	int hour;
	int min;

	int test_hourse;
	int test_min;
};

	