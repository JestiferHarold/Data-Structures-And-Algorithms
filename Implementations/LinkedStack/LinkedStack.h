#ifndef LINKED_STACK_H
#define LINKED_STACK_H

#include "../Nodes/Node.h"

class LinkedStack {
    private:
        Node* top;

    public:
        
        LinkedStack(Node* top = nullptr);
        ~LinkedStack();

        void push(Node* node);

        Node* pop();

        Node* peek();

        void display();
};

// typedef class LinkedStack {} LS;

#endif