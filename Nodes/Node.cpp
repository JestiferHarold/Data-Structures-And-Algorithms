#include <iostream>
#include "Node.h"

class Node {
    public: 
            int value;
            Node* next_node;

            Node(int value, Node* next_node = nullptr) {
                this->value = value;
                this->next_node = next_node; 
            }

            int get_value() {
                return this->value;
            }

            void set_next_node(Node* next_node) {
                if (next_node == nullptr) {
                    return;
                }

                this->next_node = next_node;
            }

            Node* get_next_node() {
                return this->next_node;
            }
};