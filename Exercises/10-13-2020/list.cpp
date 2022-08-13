#include "list.h"

Node::Node(int e) : value(e) {
}

void List::append(int e) {
  // Precondition: can't tell if list is empty or not
  Node *n = new Node(e);
  if (_tail == nullptr) {
    // List is empty, _head also must be nullptr
    _head = _tail = n;
  } else {
    // List is not empty, _head is also not a nullptr
    _tail->next = n;
    _tail = _tail->next;
  }
}