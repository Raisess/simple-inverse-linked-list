#include <iostream>
#include "linked-list.h"

void LinkedList::create_node(String value) {
  this->node = (Node *) malloc(sizeof(Node));

  this->node->value = value;
  this->node->next = this->head;

  this->head = this->node;
}

void LinkedList::print_list(void) {
  struct Node *temp = this->head;

  while (temp != NULL) {
    std::cout << "[ " << temp->value << " - " << &temp->next << " ] -> ";

    temp = temp->next;
  }

  std::cout << "NULL" << std::endl;
}
