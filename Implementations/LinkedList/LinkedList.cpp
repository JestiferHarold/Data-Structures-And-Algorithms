#include <iostream>
#include <string>
#include "..\Nodes\Node.h"
#include "LinkedList.h"

LinkedList::LinkedList(Node* head) {
    this->head = head;
}

LinkedList::~LinkedList() {
    Node* current_node = this->head;

    while (current_node->next_node != nullptr) {
        Node* node = current_node->next_node;
        current_node->~Node();
        current_node = node;
    }

    delete head;
}

Node* LinkedList::get_head_node() {
    return this->head;
}

void LinkedList::add_new_head_node(int* value) {
    Node new_head = Node(value);
    new_head.set_next_node(this->head);
    this->head = &new_head;
}

void LinkedList::add_new_head_node(Node* node) {
    node->next_node = this->head->next_node;
    this->head = node;
}

std::string LinkedList::stringify_list() {
    Node* current_node = this->head;
    std::string data = "[";
    do {
        data += std::to_string(*(current_node->get_value())) + ",";
    } while (current_node->next_node != nullptr);
    data += "]";
    return data;
}

int LinkedList::search(int value) {
    if (this->head == nullptr) {
        return -1;
    }

    
    Node* current_node = this->head;
    int index = 0;
    for (;current_node != nullptr; index ++, current_node = current_node->get_next_node()) {
        if (*current_node->get_value() == value) {
            return index;   
        }
    }

    return -1;
}

int LinkedList::search(Node* node_ptr) {
    if (this->head == nullptr) {
        return -1;
    }

    Node* current_node = this->head;
    int index = 0;
    for (;current_node != nullptr; index ++, current_node = current_node->get_next_node()) {
        if (current_node->get_next_node() == node_ptr) {
            return index;
        }
    }

    return -1;
}

void LinkedList::insert_node(Node* node, int index) {
    int n = this->get_size();
    
    if ((n - 1 < index) || (index = NULL)) {
        //last node will be this node;
    }

    // complete this later
    int i = 0;
    Node* current_node = this->head;
    for (; i < n; i ++, current_node = current_node->get_next_node()) {
        if (i != index) {
            continue;
        }

        node->set_next_node(current_node);
    }
}

void LinkedList::remove_node(Node* node) {

    if (this->head == node) {
        this->head = this->head->next_node;
        return;
    }

    Node* current_node = this->head;

    while (current_node->next_node != nullptr) {
        if (current_node->next_node == node) {
            current_node = current_node->next_node->next_node;
            return;
        }
        current_node = current_node->next_node;
    }
}

bool LinkedList::is_empty() {
    if (this->head == nullptr) {
        return true;
    }

    return false;
}

int LinkedList::get_size() {
    int i = 0;
    Node* current_node = this->head;
    for (;; i++) {

        if (current_node == nullptr) {
            return i;
        }

        current_node = current_node->next_node;
    }
}