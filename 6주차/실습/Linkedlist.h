#ifndef __LINKEDLIST__
#define __LINKEDLIST__
#include <iostream>
using namespace std;


// Linked List Node -> template 사용
template <class T>
class Node {
public:
	T data;
	Node *link;
	Node(T element) {
		data = element;
		link = 0;
	}
};
// Linked List Class -> template 사용
template <class T>
class LinkedList
{
protected:
	Node<T> *first;
	int current_size;
public:
	LinkedList() {
		first = 0;
		current_size = 0;
	};

	int GetSize() { return current_size; }; // 노드 개수를 리턴

	void Insert(T element) {				// 맨 앞에 원소를 삽입
		Node<T> *newnode = new Node<T>(element);
		newnode->link = first;
		first = newnode;
		current_size++;
	};

	virtual bool Delete(T &element){		// 맨 뒤의 원소를 삭제
		// 마지막 노드의 값을 리턴하면서, 메모리에서 할당 해제
		if (first == 0) return false;
		Node<T> *current = first, *previous = 0;
		while (1) {	 // 마지막 노드까지 찾아가는 반복문
			if (current->link == 0) // find end node
			{
				if (previous) previous->link = current->link;
				else first = first->link;
				break;
			}
			previous = current;
			current = current->link;
		}
		element = current->data;
		delete current;
		current_size--;
		return true;
	};

	void Print() {						// 리스트를 출력
		Node<T> *current_node = first;
		int idx = 1;

		if (current_size == 0) {		// list가 비어있는 경우
			cout << "출력할 Node가 없습니다." << endl;
		}
		else {							// list가 비어있지 않은 경우
			while (current_node != NULL) {	// 빈 node일 경우 반복문 종료
				if (idx == current_size) {	// 마지막 node인 경우
					cout << "[" << idx << "|" << current_node->data << "]" << endl;
				}
				else {						// 마지막 node가 아닌 경우
					cout << "[" << idx << "|" << current_node->data << "]->";
					idx++;
				}
				current_node = current_node->link;	// 다음 node로 이동
			}
		}
	};
};

#endif