#ifndef LINKED_STACK_H
#define LINKED_STACK_H

#include "../Nodes/Node.h"

/**
 * @class LinkedStack
 * 
 * @brief Class to implement stack using linked list
 */

class LinkedStack {
    private:

        //Pointer to the top of the stack
        Node* top;

    public:
        
        /**
         * @brief Constructor for Linked Stack
         * 
         * @param top pointer to the top of the stack null if no arguments passed
         * @return void
         */
        LinkedStack(Node* top = nullptr);

        /**
         * @brief Deconstructor for Linked Stack, frees space 
         * 
         * @return void
         */
        ~LinkedStack();

        /**
         * @brief Stacks another node on to the stack
         * 
         * @param node pointer to the new top node
         * @return void
         */
        void push(Node* node);

        /**
         * @brief removes and returns the top item on the stack
         * 
         * @return pointer to the current top, nullptr if empty stack
         */
        Node* pop();

        /**
         * @brief returns the top item on the stack without deleting it
         * 
         * @return pointer to the current top, nullptr if empty stack
         */
        Node* peek();

        /**
         * @brief Size of the stack
         * 
         * @return number of items in the stack, -1 if empty
         */
        int size();

        /**
         * @brief checks if the stack is empty
         * 
         * @return true if the stack is empty, else false
         */
        bool is_empty();
        
        /**
         * @brief prints all the values of the stack to the console
         * 
         * @return void
         */
        void display();
};

// typedef class LinkedStack {} LS;

#endif