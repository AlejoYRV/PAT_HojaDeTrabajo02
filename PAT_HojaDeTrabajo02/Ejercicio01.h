#pragma once

#include "Node.h"

class Ejercicio01
{
public:
	Node<char>* rotateRight(Node<char>* head, int k) {
		if (head == nullptr || head->next == nullptr || k == 0) {
			return head;
		}

		Node<char>* old_tail = head;
		int len = 1;
		while (old_tail->next != nullptr) {
			old_tail = old_tail->next;
			len++;
		}

		old_tail->next = head;

		Node<char>* new_tail = head;
		for (int i = 0; i < len - k % len - 1; i++) {
			new_tail = new_tail->next;
		}

		Node<char>* new_head = new_tail->next;

		new_tail->next = nullptr;

		return new_head;
	}
};


