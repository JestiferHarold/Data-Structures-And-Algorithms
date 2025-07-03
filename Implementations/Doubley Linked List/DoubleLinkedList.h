#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#include "../Nodes/RopeNode.h"

/**
 * @class DoubleLinkedList
 *
 * @related Linked List
 *  
 * @brief Class to implement Double Linked List
 */

class DoubleLinkedList {
    private:

        //Pointer to the head node 
        RopeNode* head;

        //Pointer to the tail node
        RopeNode* tail;
    
    public: 

        /**
         * @brief Construtor for Double Linked List
         * 
         * @param head First node of the double linked list
         * @param tail Last node of the double linked list, head node will be the tail node if tail node is nullptr
         * @return void
         */
        DoubleLinkedList(RopeNode* head, RopeNode* tail = nullptr);

        /**
         * @brief Deconstructor for double linked list to free space
         * 
         * @return void
         */
        ~DoubleLinkedList();

        /**
         * @brief To get the size of the double linked list
         * 
         * @return number of nodes in the double linked list
         */
        int get_size();

        /**
         * @brief changes the head node to the passed node, 
         * @warning if the passed node has a previous node, it will be removed
         * 
         * @param node pointer to the new head node
         * @return void
         */
        void set_new_head_node(RopeNode* node);

        /**
         * @brief removes the head node 
         * @warning if the head node has no successive node, the double linked list will be deconstructed // not sure but alright
         * 
         * @return void
         */
        void remove_head_node();

        /**
         * @brief changes the tail node to the passed node
         * @warning if the passed node has successive node, it will be erased
         * 
         * @param node pointer to the new tail node
         * @return void
         */
        void set_new_tail_node(RopeNode* node);

        /**
         * @brief removes the tail node
         * @warning if the tail has no previous node then the double linked list will be deconstructed
         * 
         * @return void
         */
        void remove_tail_node();

        /**
         * @brief Inserts a node to the specified index number, if no index value is the passed node will be the tail node
         * 
         * @param node Pointer of the node to be inserted
         * @param index index at which the node should be inserted, if none passed, index will be -1 and passed node is the new tail node
         * @return void
         */
        void add_node(RopeNode* node, int index = -1);

        /**
         * @brief removes a node based on the value it holds
         * 
         * @param value integer value that the removed node holds
         * @return True if the node is removed, else false
         */
        bool remove_node(int value);

        /**
         * @brief removes a node based on pointer
         * 
         * @param node pointer of the node to be removed
         * @return True if node is removed, else false
         */
        bool remove_node(RopeNode* node);

}

#endif