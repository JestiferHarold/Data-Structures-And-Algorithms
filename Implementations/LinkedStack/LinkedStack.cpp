#include <iostream>
#include <string>
#include "LinkedStack.h"
#include "../Nodes/Node.h"

LinkedStack::LinkedStack(Node* top) {
    this->top = top;
}

LinkedStack::~LinkedStack() {}

void LinkedStack::push(Node* node) {
    node->set_next_node(this->top);
    this->top = node;
}

Node* LinkedStack::pop() {
    return this->top;
}

Node* LinkedStack::peek() {
    return this->top;
}

void LinkedStack::display() {
    Node* curr = this->top;

    for (; curr != nullptr; curr = curr->get_next_node()) {
        std::cout << std::to_string(curr->get_value()) << std::endl;
        std::cout << "  ^\n |" << std::endl; 
    }
}