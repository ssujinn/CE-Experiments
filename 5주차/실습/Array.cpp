#include"Array.h"
#include<iostream>

using namespace std;

Array::Array(int size) {
	if (size > 0) {
		data = new int[size];
		len = size;
	}
	else {
		cout << " Array bound error!" << endl;
	}
}

Array::~Array() {
	delete[] data;
}

int Array::length() {
	return len;
}

int& Array::operator[](int i) {
	static int tmp;

	if (i >= 0 && i < len)
		return data[i];

	cout << " Array bound error!!" << endl;
	return tmp;
}

int Array::operator[](int i) const {
	if (i >= 0 && i < len)
		return data[i];

	cout << " Array bound error!" << endl;
	return 0;
}

void Array::print() {
	int i;

	cout << " [";
	for (i = 0; i < len - 1; i++) {
		cout << data[i] << " ";
	}
	cout << data[i] << "]" << endl;
}
