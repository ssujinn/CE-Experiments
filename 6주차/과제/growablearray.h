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

			// buffer�� data ����
			for (k = 0; k < len_tmp; k++)
				buffer[k] = this->data[k];

			// data ũ�� 2��
			this->len = 2 * i;
			this->data = new T[2 * i];

			// buffer�� ����� ������ data�� �ű�
			for (k = 0; k < this->len; k++)
				this->data[k] = buffer[k];
			
			// ���� data ������ 0 ����
			for (k = len_tmp; k < this->len; k++)
				this->data[k] = 0;

			delete[] buffer;
			return this->data[i];
		}

		cout << "Array bound error!" << endl;
		return tmp;
	}
};