#ifndef LinkedList_H
#define LinkedList_H

#include <iostream>
#include <string>
#include "..\Nodes\Node.h"

class LinkedList {
    public:
        Node* head;

        LinkedList(Node* node);
        ~LinkedList();
        Node* get_head_node();
        void add_new_head_node(int* value);
        void add_new_head_node(Node* node);
        std::string stringify_list();
        int search(int value);
        int search(Node* node_ptr);
        void insert_node(Node* node, int index = NULL);
        void remove_node(Node* node);
        bool is_empty();
        int get_size();
};

#endif