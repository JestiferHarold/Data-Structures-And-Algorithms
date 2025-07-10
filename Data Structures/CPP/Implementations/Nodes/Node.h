#ifndef NODE_H
#define NODE_H

/**
 * @class Node
 * @brief A class to implement the node data structure
 */

class Node {
    public:
        //Pointer to the value of the node
        int value;

        //Pointer to the next node, null if none
        Node* next_node;

        /**
         * @brief Constructore for the class node
         * 
         * @param value pointer to the integer value
         * @param next_node pointer to the next node, null if no argument provided
         * @return void
         */
        Node(int value, Node* next_node = nullptr);

        /**
         * @deprecated not in use
         */
        // Node(int value);

        /**
         * @brief decondtructor to release memory space
         * 
         * @return void
         */
        ~Node();

        /**
         * @brief gets the value of the current node
         * 
         * @return integer value
         */
        int get_value();

        /**
         * @brief sets the next node of this current node
         * 
         * @param next_node pointer to the next node
         * @return void
         */
        void set_next_node(Node* next_node);

        /**
         * @brief gets the next node
         * 
         * @return pointer to the next node, nullptr if none
         */
        Node* get_next_node();
};

#endif