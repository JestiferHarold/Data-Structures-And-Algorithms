#ifndef NODE_H
#define NODE_H

class Node {
    public:
        int value;
        Node* next_node;
        Node(int value, Node* next_node = nullptr);
        int get_value();
        void set_next_node(Node* next_node);
        Node* get_next_node();
};

#endif