#ifndef NODE_H
#define NODE_H

// Node represents a single character in the linked list.
struct Node {
    char data;   // character stored in this node
    Node* next;  // pointer to the next node

    Node(char c) : data(c), next(nullptr) {}
};

#endif // NODE_H
