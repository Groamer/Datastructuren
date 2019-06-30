#include "stdafx.h"
#include "Overloader.h"

Overloader::Overloader(int day, int month, int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}
Overloader::~Overloader() {

}

Overloader& Overloader::operator=(const Overloader& date) {
	if (this == &date) {
		return *this;
	}

	this->day = date.day;
	this->month = date.month;
	this->year = date.year;
}
std::ostream& operator<<(std::ostream& ostream, const Overloader& date) {
	ostream << date.day << '-' << date.month << '-' << date.year;
	return ostream;
}