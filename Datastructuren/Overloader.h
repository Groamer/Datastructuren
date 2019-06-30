#pragma once

class Overloader {
private:
	int day, month, year;

public:
	Overloader(int, int, int);
	~Overloader();

	friend std::ostream& operator<<(std::ostream&, const Overloader&);
};