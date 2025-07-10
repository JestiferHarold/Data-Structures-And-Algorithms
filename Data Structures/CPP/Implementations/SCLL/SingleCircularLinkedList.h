#ifndef SINGLE_CIRCULAR_LINKED_LIST_HEADER
#define SINGLE_CIRCULAR_LINKED_LIST_HEADER

#include <iostream>
#include "../Nodes/Node.h"

class SCLL{
    
    private:
        Node* head;
        Node* tail;

    public:
        SCLL(Node* head, Node* tail);
        ~SCLL();

        int size();

        void insert_at_beginning(Node* head);
        void insert_at_end(Node* tail);
        void insert(Node* node, int index);
        
        void delete_head();
        void delete_tail();
        void delete_node(Node* node);
        void delete_node(int i);

};


#endif