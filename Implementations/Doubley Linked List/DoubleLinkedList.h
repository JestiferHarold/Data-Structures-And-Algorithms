#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#include "../Nodes/RopeNode.h"

class DoubleyLinkedList {
    private:
        int size;
        RopeNode* head;
        RopeNode* tail;
    
    public: 
        DoubleyLinkedList(RopeNode* head, RopeNode* tail);
        ~DoubleyLinkedList();
        int get_size();
        void add_node(RopeNode* node, int index = -1);
}

#endif