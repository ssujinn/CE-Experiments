#include "LinkedList.h"

template <class T>
class Stack :public LinkedList<T> {
public:
	virtual bool Delete(T& element) {	// stack의 delete 함수
		// Stack이 비어있으면 false 리턴
		if (this->first == 0) return false;

		// Stack이 비어있지 않으면 첫 노드 삭제
		Node<T> *current = this->first;
		this->first = current->link;	// 두번째 노드를 first로
		element = current->data;		// element : 삭제한 원소
		delete current;					// 첫 노드 삭제
		this->current_size--;			// current_size 1감소
		return true;
	}
};