#ifndef ROPE_NODE_H
#define ROPE_NODE_H

/**
 * @brief 
 * 
 * @related to node.h
 * 
 * 
 */

class RopeNode {
    private:
        int value;
        RopeNode* next_node;
        RopeNode* previous_node;

    public:
        RopeNode(int value, RopeNode* successive_node = nullptr, RopeNode* previous_node = nullptr);
        ~RopeNode();
        int* get_value();
        RopeNode* get_next_node();
        RopeNode* get_previous_node();
        void add_new_successive_node(RopeNode* node);
        void remove_successive_node();
        void add_new_previous_node(RopeNode* node);
};

#endif