#include <iostream>
#include "Implementations/Nodes/Node.h"
#include "Implementations/LinkedList/LinkedList.h"

using namespace std;

int main() {
    Node a = Node(10);
    Node b = Node(11);
    Node c = Node(12);
    Node d = Node(13);
    Node e = Node(14);

    a.set_next_node(&b);
    b.set_next_node(&c);
    c.set_next_node(&d);
    d.set_next_node(&e);

    LinkedList LL = LinkedList(&a);
    cout << LL.get_size() << endl;
    cout << "Before Reversing" << endl;
    for (Node* current = LL.get_head_node(); current != nullptr; current = current->get_next_node()) {
        cout << to_string(current->value) + " ";
    }

    cout << "\nAfter Reversing" << endl;
    LL.reverse_list();
    for (Node* current = LL.get_head_node(); current != nullptr; current = current->get_next_node()) {
        cout << to_string(current->value) + " ";
    }
    return 0;
}