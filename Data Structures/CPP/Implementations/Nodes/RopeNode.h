#ifndef ROPE_NODE_H
#define ROPE_NODE_H

/**
 * @class RopeNode
 * 
 * @related to node.h
 * 
 * @brief A class to implement RopeNode, a node with a pointer to the next item and the previous item
 */

class RopeNode {
    private:

        //integer value for the node
        int value;
        
        //Pointer to the next rope node, nullptr if none (ususally the tail)
        RopeNode* next_node;

        //pointer to the previous node, nullptr if none (usually the head) 
        RopeNode* previous_node;

    public:
        /**
         * @brief Constructor for the RopeNode
         * 
         * @param value integer value for the node to store
         * @param successive_node pointer to the next node, nullptr if none passed
         * @param previous_node pointer to the previous node, nullptr if none passed
         * @return void 
         */
        RopeNode(int value, RopeNode* successive_node = nullptr, RopeNode* previous_node = nullptr);

        /**
         * @brief deconstructor to free space
         * 
         * @return void
         */
        ~RopeNode();

        /**
         * @brief getter for member value
         * 
         * @return pointer to the integer value stored
         */
        int* get_value();

        /**
         * @brief getter for member next_node
         * 
         * @return pointer to the next node, null if none
         */
        RopeNode* get_next_node();

        /**
         * @brief getter for member previous node
         * 
         * @return pointer to the previous node, null if none
         */
        RopeNode* get_previous_node();

        /**
         * @brief setter for the member next_node
         * 
         * @param node pointer to the next node
         * @return void
         */
        void add_new_successive_node(RopeNode* node);
        
        /**
         * @brief changes the member next_node to nullptr
         * 
         * @return void
         */
        void remove_successive_node();

        /**
         * @brief setter for the member previous_node
         * 
         * @param node pointer to the previous_node
         * @return void 
         */
        void add_new_previous_node(RopeNode* node);

        /**
         * @brief changes the member previous_node to nullptr
         * 
         * @return void
         */
        void remove_previous_node();

        /**
         * @brief removes the current node and changes the previous node's next node to this node's next node
         * 
         * @return True if remove and the previous and next nodes are attached, else False
         */
        bool remove_current_node();
};

#endif