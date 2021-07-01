#include "LinkedList.h"

template <class T>
class Stack :public LinkedList<T> {
public:
	virtual bool Delete(T& element) {	// stack�� delete �Լ�
		// Stack�� ��������� false ����
		if (this->first == 0) return false;

		// Stack�� ������� ������ ù ��� ����
		Node<T> *current = this->first;
		this->first = current->link;	// �ι�° ��带 first��
		element = current->data;		// element : ������ ����
		delete current;					// ù ��� ����
		this->current_size--;			// current_size 1����
		return true;
	}
};