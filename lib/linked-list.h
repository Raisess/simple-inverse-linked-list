#include <iostream>

typedef std::string String;

typedef struct Node {
  String value;
  Node *next;
} Node;

class LinkedList {
  private:
    Node* head;
    Node* node;

  public:
    void create_node(String value);
    void print_list(void);
};
