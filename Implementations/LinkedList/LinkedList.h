// -*- lsst-c++ -*-

#ifndef LinkedList_H 
#define LinkedList_H

#include <iostream>
#include <string>
#include "..\Nodes\Node.h"

/**
 * @class LinkedList
 * @brief A class to implement linked list using nodes
 */

class LinkedList {
    public:
        //pointer to the head of the linked list
        Node* head; 

        /**
         * Constructor for a linked list
         * 
         * Initializes a new instance of linked list.
         * @param pointer to the head node
         * @return void
        */
        LinkedList(Node* node);

        /**
         * @brief Deconstructor to free memory
         * @return void
         */
        ~LinkedList();

        /**
         * @brief returns the first node of the linked list
         * 
         * @return pointer to the first node
         */
        Node* get_head_node();

        /**
         * @brief returns the last node of the linked list
         * 
         * @return pointer containing the   
         */
        Node* get_tail_node();

        /**
         * @brief creates a new node and places it first replacing the original first node
         * 
         * @param pointer to the integer variable
         * @return void
         */
        void add_new_head_node(int* value);

        /**
         * @brief replaces the first node with the parameter
         * 
         * @param pointer to the new first node
         * @return void
         */
        void add_new_head_node(Node* node);

        /**
         * @brief converts the linked list to a string 
         * 
         * @return std::string with the list of values 
         */
        std::string stringify_list();

        /**
         * @brief searches for the node with the integer value
         * 
         * @param value to be found
         * @return the index of the node, if either the head node is null or the node with the value passed is not found then returns -1
         */
        int search(int value);

        /**
         * @brief searches for the index using a node pointer
         * 
         * @param node_ptr pointer to the node to be found
         * @return the index of the node in the linked list, if either the head node is null or the node is not found function returns -1
         */
        int search(Node* node_ptr);

        /**
         * Inserts a node at the given index value
         * if the index is null of bigger than the size of the linkedlist then it appends the node to the tail making it the tail
         * 
         * @param node pointer of the node to be inserted
         * @param index index at which the node should be inserted, null if no value is given
         * @return void
         */
        void insert_node(Node* node, int index = NULL);
        
        /**
         * @brief removes a node from the linked list
         * 
         * @return void
         */
        void remove_node(Node* node);

        /**
         * @brief checks if the head is null
         * 
         * @return true if the head is null else false
         */
        bool is_empty();

        /**
         * @brief gives the size of the linked list
         * 
         * @return size of the linked list
         */
        int get_size();

        /**
         * Reverses the linked list 
         * 
         * @return void
         */
        void reverse_list();
};

#endif