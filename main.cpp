#include <iostream>
#include "lib/linked-list.h"

int main() {
  LinkedList *linked_list = new LinkedList();

  linked_list->create_node("third node");
  linked_list->create_node("second node");
  linked_list->create_node("first node");

  linked_list->print_list();

  return 0;
}
