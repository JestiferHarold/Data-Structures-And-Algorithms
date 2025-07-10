#include <iostream>
#include "DoubleLinkedList.h"
#include "../Nodes/RopeNode.h"

using namespace std;

DoubleLinkedList::DoubleLinkedList(RopeNode* head, RopeNode* tail) {
    this->head = head;
    this->tail = tail;
}

DoubleLinkedList::~DoubleLinkedList() {

}

int DoubleLinkedList::get_size() {
    int i = 0;
    for (RopeNode* curr_node = this->head; curr_node != nullptr; curr_node = curr_node->get_next_node(), i ++);
    return i;
}

void DoubleLinkedList::set_new_head_node(RopeNode* node) {
    node->add_new_previous_node(nullptr);
    node->add_new_successive_node(this->head);
    this->head = node;
}

void DoubleLinkedList::remove_head_node() {
    if (this->head == nullptr) return;

    this->head = this->head->get_next_node();
    delete this->head->get_previous_node();
}

void DoubleLinkedList::set_new_tail_node(RopeNode* node) {
    if (this->head == nullptr) return;

    node->add_new_previous_node(this->tail);
    node->add_new_successive_node(nullptr);
    this->tail = node;
}

void DoubleLinkedList::remove_tail_node() {
    if (this->head == nullptr) return;

    this->tail = this->tail->get_previous_node();
    delete this->tail->get_next_node();
    this->tail->add_new_successive_node(nullptr);
}

void DoubleLinkedList::add_node(RopeNode* node, uint64_t index) {
    if (index == NULL || this->get_size() >= index || index == 0) return;

    RopeNode* curr = this->head;
    for (int i = 0; curr != nullptr; i ++, curr = curr->get_next_node()) {
        if (i == index) {
            node->add_new_previous_node(curr->get_previous_node());
            node->add_new_successive_node(curr);
            curr->add_new_previous_node(node);
            return;
        }
    }
}

bool DoubleLinkedList::remove_node(int value) {
    RopeNode* curr = this->head;

    for (; curr != nullptr; curr = curr->get_next_node()) {
        if (*curr->get_value() == value) {
            curr->get_previous_node()->add_new_successive_node(curr->get_next_node());
            if (curr->get_next_node() != nullptr) curr->get_next_node()->add_new_previous_node(curr->get_previous_node());
            delete curr;
            return true;
        }
    }

    return false;
}

bool DoubleLinkedList::remove_node(RopeNode* node) {
    RopeNode* curr = this->head;

    for (; curr != node && curr != nullptr; curr = curr->get_next_node());

    if (curr == nullptr) return false;

    curr->get_previous_node()->add_new_successive_node(curr->get_next_node());
    
    if (curr->get_next_node() != nullptr) {
        curr->get_next_node()->add_new_previous_node(curr->get_previous_node());
    }

    return true;
}