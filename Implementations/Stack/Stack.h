#ifndef STACK_H
#define STACK_H

const int MAX_SIZE = 100;

class Stack {
    private:    
            int ARRAY[MAX_SIZE];
            int top;
    
    public:
            Stack();
            Stack(int* array[]);
            ~Stack();
            int pop();
            void push();
            void peek();
            void empty();
            bool is_full();
            bool is_empty();
            int size();

};

#endif
