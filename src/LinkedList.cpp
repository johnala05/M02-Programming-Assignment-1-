#include "LinkedList.h"
#include <cctype>

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    clear();
}

void LinkedList::clear() {
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
}

bool LinkedList::isEmpty() const {
    return head == nullptr;
}

void LinkedList::append(char c) {
    Node* newNode = new Node(c);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}

void LinkedList::rotate() {
    // If list is empty or has only one node, rotation does nothing.
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    Node* first = head;
    head = head->next;      // new head is second node
    first->next = nullptr;  // detach first node

    // Move to the end of the list
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = first;  // append old first node at the end
}

bool LinkedList::startsWithVowel() const {
    if (head == nullptr) {
        return false;
    }

    char c = std::tolower(head->data);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int LinkedList::length() const {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        ++count;
        current = current->next;
    }
    return count;
}

std::string LinkedList::toString() const {
    std::string result;
    Node* current = head;
    while (current != nullptr) {
        result.push_back(current->data);
        current = current->next;
    }
    return result;
}
