#pragma once

#include "Node.h"

class Ejercicio02 {
public:
    Node<int>* addTwoNumbers(Node<int>* l1, Node<int>* l2) {
        Node<int> dummy(0);
        Node<int>* current = &dummy;
        int carry = 0;

        while (l1 || l2 || carry) {
            int sum = carry + (l1 ? l1->value : 0) + (l2 ? l2->value : 0);
            carry = sum / 10;
            current->next = new Node<int>(sum % 10);
            current = current->next;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        return dummy.next;
    }
};

