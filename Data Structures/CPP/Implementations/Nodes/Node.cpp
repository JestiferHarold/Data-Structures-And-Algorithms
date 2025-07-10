#include <iostream>
#include "Node.h"

Node::Node(int value, Node* next_node) {
    this->value = value;
    this->next_node = next_node; 
}

// Node::Node(int value) {
//     // this->value = &value;
//     // this->next_node = nullptr;
// }

Node::~Node() {
    delete &value;
    delete next_node;
}

int Node::get_value() {
    return this->value;
}

void Node::set_next_node(Node* next_node) {
    if (next_node == nullptr) {
        return;
    }

    this->next_node = next_node;
}

Node* Node::get_next_node() {
    return this->next_node;
}