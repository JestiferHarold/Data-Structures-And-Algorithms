#ifndef QUEUE_HEADER
#define QUEUE_HEADER

#include "../Nodes/Node.h"

class Queue {
    private:
        Node* front;
        Node* rear;

    public:

        Queue(Node* front = nullptr, Node* rear = nullptr);
        ~Queue();
        void enQueue(Node* new_rear);
        Node* deQueue();
        Node* peek();
        int size();
        void print_queue();
};

#endif