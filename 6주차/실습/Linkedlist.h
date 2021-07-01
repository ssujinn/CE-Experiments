#ifndef __LINKEDLIST__
#define __LINKEDLIST__
#include <iostream>
using namespace std;


// Linked List Node -> template ���
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
// Linked List Class -> template ���
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

	int GetSize() { return current_size; }; // ��� ������ ����

	void Insert(T element) {				// �� �տ� ���Ҹ� ����
		Node<T> *newnode = new Node<T>(element);
		newnode->link = first;
		first = newnode;
		current_size++;
	};

	virtual bool Delete(T &element){		// �� ���� ���Ҹ� ����
		// ������ ����� ���� �����ϸ鼭, �޸𸮿��� �Ҵ� ����
		if (first == 0) return false;
		Node<T> *current = first, *previous = 0;
		while (1) {	 // ������ ������ ã�ư��� �ݺ���
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

	void Print() {						// ����Ʈ�� ���
		Node<T> *current_node = first;
		int idx = 1;

		if (current_size == 0) {		// list�� ����ִ� ���
			cout << "����� Node�� �����ϴ�." << endl;
		}
		else {							// list�� ������� ���� ���
			while (current_node != NULL) {	// �� node�� ��� �ݺ��� ����
				if (idx == current_size) {	// ������ node�� ���
					cout << "[" << idx << "|" << current_node->data << "]" << endl;
				}
				else {						// ������ node�� �ƴ� ���
					cout << "[" << idx << "|" << current_node->data << "]->";
					idx++;
				}
				current_node = current_node->link;	// ���� node�� �̵�
			}
		}
	};
};

#endif