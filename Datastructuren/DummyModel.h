#pragma once
class DummyModel {
public:
	//Normal constructor
	DummyModel();
	//Copy constructor
	DummyModel(const DummyModel&);
	//Destructor
	~DummyModel();

	int* getCoordinates2D();
	void setCoordinates2D(int, int);

	//std::cout << operator overload
	friend std::ostream& operator<<(std::ostream&, const DummyModel&);

private:
	static const int arraySize = 2;
	int coordinates2D[arraySize];
};