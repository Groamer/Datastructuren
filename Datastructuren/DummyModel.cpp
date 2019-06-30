#include "stdafx.h"
#include "DummyModel.h"



//Normal constructor
DummyModel::DummyModel(int _x, int _y) {
	x = _x;
	y = _y;
}

DummyModel::~DummyModel() {

}

void DummyModel::print() {
	std::cout << "DummyModel: X = " << x << ", Y = " << y << std::endl;
}