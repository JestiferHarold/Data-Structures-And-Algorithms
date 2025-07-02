#include <iostream>
#include "DoubleLinkedList.h"
#include "../Nodes/RopeNode.h"

DoubleyLinkedList::DoubleyLinkedList(RopeNode* head, RopeNode* tail) {
    this->size = 2;
    this->head = head;
    this->tail = tail;
}

int DoubleyLinkedList::get_size() {
    return this->size;
}

void DoubleyLinkedList::add_node(RopeNode* node, int index) {
    if (index == -1 || index > this-   )
}