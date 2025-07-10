#include <iostream>
#include <string>
#include "../Nodes/Node.h"
#include "SingleCircularLinkedList.h"

SCLL::SCLL(Node* head, Node* tail) {
    this->head = head;
    this->tail = tail;
}

SCLL::~SCLL() {}

int SCLL::size() {
    Node* last_node = this->tail;
    int i = 0;
    for (Node* curr = this->head; last_node != curr; curr = curr->get_next_node(), i ++);
    return i;
}

void SCLL::insert_at_beginning(Node* head) {
    head->next_node = this->head;
    this->head = head;
    this->tail->next_node = head;
}

void SCLL::insert_at_end(Node* tail) {
    tail->next_node = this->head;
    this->tail->next_node = tail;
    this->tail = tail;
}

void SCLL::insert(Node* node, int index) {
    int nodes = this->size();
    if (index > nodes) return;
    Node* curr = this->head;
    for (int i = 0; i != index - 1; curr = curr->get_next_node(), i ++);
    node->next_node = curr->get_next_node();
    curr->next_node = node;
}

void SCLL::delete_head() {
    Node* temp = this->head;
    this->head = this->head->get_next_node();
    delete temp;
}

void SCLL::delete_tail() {
    Node* curr = this->head;
    for (; curr->get_next_node()->get_next_node() != nullptr; curr = curr->get_next_node());
    delete curr->get_next_node();
    curr->set_next_node(nullptr);
}

void SCLL::delete_node(Node* node) {
    Node* curr = this->head;
    for (; curr->get_next_node() != node; curr = curr->get_next_node());
    Node* temp = curr->get_next_node();
    node->set_next_node(curr->get_next_node()->get_next_node());
    curr->set_next_node(node);
    delete temp;
}   