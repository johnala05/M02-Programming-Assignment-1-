#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>
#include "Node.h"

// LinkedList stores characters of a word and supports rotation.
class LinkedList {
private:
    Node* head;  // pointer to the first node

public:
    LinkedList();
    ~LinkedList();

    void append(char c);          // add character at the end
    void rotate();                // move first node to the end
    bool startsWithVowel() const; // check if first character is a vowel
    int length() const;           // number of nodes
    bool isEmpty() const;         // check if list is empty
    std::string toString() const; // convert list to std::string

private:
    void clear();                 // delete all nodes
};

#endif // LINKEDLIST_H
