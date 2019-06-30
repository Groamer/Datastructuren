#include "stdafx.h"
#include "DummyModel.h"

DummyModel::DummyModel() {

}
DummyModel::DummyModel(const DummyModel &model) {
	memcpy(this->coordinates2D, model.coordinates2D, sizeof(int) * this->arraySize);
}
DummyModel::~DummyModel() {

}

int* DummyModel::getCoordinates2D() {
	return this->coordinates2D;
}
void DummyModel::setCoordinates2D(int x, int y) {
	this->coordinates2D[0] = x;
	this->coordinates2D[1] = y;
}

std::ostream& operator<<(std::ostream& ostream, const DummyModel& model) {
	ostream << "X = " << model.coordinates2D[0] << ", Y = " << model.coordinates2D[1];
	return ostream;
}