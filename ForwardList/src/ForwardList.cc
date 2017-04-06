#include "ForwardList.h"
#include <iostream>


ForwardListNode::ForwardListNode(int v) :
  value(v),
  next(nullptr)
{
  // All the work is done in the initializer list.
}

ForwardList::ForwardList() :
  head(nullptr),
  tail(nullptr),
  count(0)
{
  // All the work is done in the initializer list.
}

ForwardList::ForwardList(int elements[], int size) :
  head(nullptr),
  tail(nullptr),
  count(0)
{
  for (int k = 0; k < size; ++k)
  {
    this->push_back(new ForwardListNode(elements[k]));
  }
}

ForwardList::ForwardList(std::initializer_list<int> values) :
  head(nullptr),
  tail(nullptr),
  count(0)
{
  for (auto *it = values.begin(); it != values.end(); ++it)
  {
    this->push_back(new ForwardListNode(*it));
  }
}

ForwardList::~ForwardList()
{
  ForwardListNode *fln = head;
  ForwardListNode *del;
  while(fln != nullptr)
  {
    del = fln;
    fln = fln->next;
    delete del;
  }

  count = 0;
}

void ForwardList::push_back(ForwardListNode* ptr)
{
  if (tail == nullptr)
  {
    // The list is empty. The new element should become a head and a tail.
    head = tail = ptr;
  }
  else
  {
    tail->next = ptr;
    tail = ptr;
  }

  count += 1;
}

void ForwardList::push_back(int value)
{
  ForwardListNode *fln = new ForwardListNode(value);
  this->push_back(fln);
}

void ForwardList::push_front(ForwardListNode *ptr)
{
  if (head == nullptr)
  {
    // The list is empty. The new element should become a head and a tail.
    head = tail = ptr;
  }
  else
  {
    ptr->next = head;
    head = ptr;
  }

  count += 1;
}

void ForwardList::push_front(int value)
{
  ForwardListNode *fln = new ForwardListNode(value);
  this->push_front(fln);
}

void ForwardList::print()
{
  std::cout << "[";
  ForwardListNode *fln = head;
  while (fln != nullptr)
  {
    // Inserts links glyph before every but first printed element.
    if (fln != head)
    {
      std::cout << " -> ";
    }
    std::cout << fln->value;

    fln = fln->next;
  }
  std::cout << "]" << std::endl;
}

