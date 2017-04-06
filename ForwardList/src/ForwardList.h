#ifndef FORWARDLIST_H
#define FORWARDLIST_H

#include <initializer_list>

class ForwardListNode
{
 public:
  ForwardListNode(int v);

 public:
  int value;
  ForwardListNode *next;
};

class ForwardList
{
 public:
  // Creates an empty list.
  // Pre: (none)
  // Post: An empty list is created.
  ForwardList();

  // Creates a list containing the elements from the array in provided order.
  // Pre: (none)
  // Post: A list containing the elements in requested order is created.
  ForwardList(int elements[], int size);

  // Creates a list containing the elements from the initializer list
  // in provided order.
  // Pre: (none)
  // Post: A list containing the elements in requested order is created.
  ForwardList(std::initializer_list<int> values);

  // Frees up the elements when disposing of the list:
  ~ForwardList();

  // Appends a ForwardListNode to the end of the list.
  void push_back(ForwardListNode* ptr);

  // Creates a new node of a list and appends it to the end.
  void push_back(int value);

  // Prepends a ForwardListNode to the beginning of the list.
  void push_front(ForwardListNode *ptr);

  // Creates a new node of a list and prepends it to the beginning of the list.
  void push_front(int value);

  // Prints the contents of the list to a standard output.
  void print();

 private:
  ForwardListNode *head;
  ForwardListNode *tail;

  // Holds the total number of elements comprising the list.
  int count;
};


#endif // FORWARDLIST_H
