#include <cstdio>
#include "list.h"

Node::Node(int e) : value(e) {
}

void List::append(int e) {
  // Precondition: can't tell if list is empty or not
  Node *np = new Node(e);
  if (_tail == nullptr) {
    // List is empty, _head akso must be nullptr
    _head = _tail = np;
  } else {
    // List is not empty, _head is also not a nullptr
    _tail->next = np;
    _tail = _tail->next;
  }
}

bool List::search(int e) {
  for (Node *np = _head; np != nullptr; np->next) {
    if (np ->value == e) {
      return true;
    }
  }
  return false;
}

bool List::remove(int e) {
  // Node to delete
  Node *dp;

  // No elements
  if (_head == nullptr) {
    return false;
  }

  // Head is the match
  if (_head -> value == e) {
    dp = _head;
    _head = _head->next;
    if (_head == nullptr) {
      _tail = nullptr;
    }
    delete dp;
    return true;
  }

  // Head is not a match, and there are multiple elements
  for (Node *np = _head; np != nullptr; np = np->next) {
    if (np -> value == e) {
      dp = np->next;
      np->next = np->next->next;
      if (np->next == nullptr) {
        _tail = np;
      }
      delete dp;
      return true;
    }
  }
  return false;
}

void List::dump() {
  // Traversal list
  for (Node *np = _head; np != nullptr; np = np->next) {
    if (np != _head) {
      printf(" -> ");
    }
    printf("%d ", np->value);
  }
  printf("\n");
}