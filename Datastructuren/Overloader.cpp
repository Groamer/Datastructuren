#include "stdafx.h"
#include "Overloader.h"

Overloader::Overloader(int day, int month, int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}
Overloader::~Overloader() {

}

std::ostream& operator<<(std::ostream& ostream, const Overloader& date) {
	ostream << date.day << '-' << date.month << '-' << date.year;
	return ostream;
}