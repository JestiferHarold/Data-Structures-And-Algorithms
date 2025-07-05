#ifndef QUEUE_HEADER
#define QUEUE_HEADER

#include "../Nodes/Node.h"

/**
 * @class Queue
 * 
 * @brief class to implement the queue data structure
 */

class Queue {
    private:

        //Pointer to the first element in the queue
        Node* front;

        //pointer to the last element in the queue
        Node* rear;

    public:

        /**
         * @brief Constructor for the class Queue
         * 
         * @param front pointer to the first element of the queue, nullptr if none
         * @param rear pointer to the last element of the queue, nullptr if none
         * @return void
         */
        Queue(Node* front = nullptr, Node* rear = nullptr);

        /**
         * @brief Deconstructor for the objects in class queue
         * 
         * @return void
         */
        ~Queue();

        /**
         * @brief Adds an element to the end of the queue
         * 
         * @param new_rear pointer to the new last node in the queue
         * @return void
         */
        void enQueue(Node* new_rear);

        /**
         * @brief removes and returns an element from the start of the queue
         * 
         * @return pointer to the removed node, nullptr if empty queue
         */
        Node* deQueue();

        /**
         * @brief returns an element from the start of the queue without removing 
         * 
         * @return pointer to the node from the start of the queue, nullptr if empty queue
         */
        Node* peek();

        /**
         * @brief finds the number of elements in the queue
         * 
         * @return integer value of number of elements in the queue, -1 if empty
         */
        int size();

        /**
         * @brief Prints all the values of the queue in the console
         * 
         * @return void
         */
        void print_queue();
};

#endif