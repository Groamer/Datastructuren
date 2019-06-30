#pragma once
class DummyModel {
private:
	int x;
	int y;

public:
	DummyModel(int, int);
	//Copy constructor
	DummyModel(const DummyModel &model) {
		x = model.x;
		y = model.y;
	};
	~DummyModel();

	void print();
};