#include <iostream>
#include "RopeNode.h"

RopeNode::RopeNode(int value, RopeNode* successive_node, RopeNode* previous_node) {
    this->value = value;
    this->next_node = successive_node;
    this->previous_node = previous_node;
}

RopeNode::~RopeNode() {
    delete &this->value;
    delete this->next_node;
    delete this->previous_node;
}

int* RopeNode::get_value() {
    return &this->value
}

RopeNode* RopeNode::get_next_node() {
    return this->next_node;
}

RopeNode* RopeNode::get_previous_node() {
    return this->previous_node;
}

void RopeNode::add_new_successive_node(RopeNode* node) {
    node->next_node = this->next_node;
    node->previous_node = this;
    this->next_node->previous_node = node;
    this->next_node = node;
}

void RopeNode::remove_successive_node() {
    if (this->next_node == nullptr) {
        return;
    }

    if (this->next_node->next_node == nullptr) {
        this->next_node = nullptr;
        return;
    }

    RopeNode* node_to_be_deleted = this->next_node;
    this->next_node = node_to_be_deleted->next_node;
    node_to_be_deleted->next_node->previous_node = this->next_node;
    node_to_be_deleted->~RopeNode();
}

void RopeNode::add_new_previous_node(RopeNode* node) {
    // node->next_node = 
}