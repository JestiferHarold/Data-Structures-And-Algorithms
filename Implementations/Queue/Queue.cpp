#include <iostream>
#include <string>
#include "../Nodes/Node.h"
#include "Queue.h"

Queue::Queue(Node* front, Node* rear) {
    this->front = front;
    this->rear = rear;
}

Queue::~Queue() {}

void Queue::enQueue(Node* new_rear) {
    if (new_rear == nullptr || new_rear == NULL) return;

    new_rear->set_next_node(nullptr);
    this->rear->set_next_node(new_rear);
}

Node* Queue::deQueue() {
    Node* temp = this->front;
    this->front = this->front->get_next_node();
    return temp;
}

int Queue::size() {
    int i = 0;
    for (Node* curr = this->front; curr != nullptr; curr = curr->get_next_node(), i ++);
    return i + 1;
}

void Queue::print_queue() {
    for (Node* curr = this->front; curr != nullptr; curr = curr->get_next_node()) 
        std::cout << std::to_string(curr->get_value()) + "\n  ^\n  |\n" << std::endl;
}