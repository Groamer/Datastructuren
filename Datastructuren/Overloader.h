#pragma once

class Overloader {
private:
	int day, month, year;

public:
	Overloader(int, int, int);
	~Overloader();

	//Assignment overloading
	Overloader& operator=(const Overloader&);
	//std::cout >> overloading
	friend std::ostream& operator<<(std::ostream&, const Overloader&);
};