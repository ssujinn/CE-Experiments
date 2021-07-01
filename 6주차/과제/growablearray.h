#include "array.h"
#include<iostream>
using namespace std;

template <class T>
class GrowableArray : public Array <T>
{
public:
	GrowableArray(int size) : Array<T>(size) {}
	~GrowableArray() {}
	virtual T& operator[](int i) {
		static T tmp;
		int k;

		if (i >= 0 && i < this->len)
			return this->data[i];

		if (i >= this->len)
		{
			T *buffer;
			int len_tmp = this->len;
			buffer = new T[len_tmp];

			// buffer에 data 저장
			for (k = 0; k < len_tmp; k++)
				buffer[k] = this->data[k];

			// data 크기 2배
			this->len = 2 * i;
			this->data = new T[2 * i];

			// buffer에 저장된 내용을 data로 옮김
			for (k = 0; k < this->len; k++)
				this->data[k] = buffer[k];
			
			// 남은 data 공간에 0 저장
			for (k = len_tmp; k < this->len; k++)
				this->data[k] = 0;

			delete[] buffer;
			return this->data[i];
		}

		cout << "Array bound error!" << endl;
		return tmp;
	}
};