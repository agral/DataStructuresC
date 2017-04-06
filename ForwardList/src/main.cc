/**
 * Name: main.cc
 * Description: Tests/Demonstrates the abilities of a ForwardList class.
 * Created on: 2017-04-05
 * Last Modified: 2017-04
 * Author: Adam "simba" Szczerbiak (szczerbiakadam@gmail.com)
 * License: MIT
 */

#include "ForwardList.h"
#include <iostream>

int main()
{
  std::cout << "The following is the demonstration of a ForwardList class."
      << std::endl;

  std::cout << "Generating an empty list [fl0]..." << std::endl;
  ForwardList fl0;

  std::cout << "Generating a list [fl1] containing elements: "
      << "101 102 103 104 105 ..." << std::endl;
  ForwardList fl1({101, 102, 103, 104, 105});

  std::cout << "Generating a list [fl2] containing elements from array: "
      << "201 202 203 ..." << std::endl;
  int fl2_arr[] = {201, 202, 203};
  ForwardList fl2(fl2_arr, 3);

  std::cout << "Printing the contents of fl0:" << std::endl;
  fl0.print();
  std::cout << "Printing the contents of fl1:" << std::endl;
  fl1.print();
  std::cout << "Printing the contents of fl2:" << std::endl;
  fl2.print();

  std::cout << "Prepending the fl2 with the value of 200 ..." << std::endl;
  fl2.push_front(200);
  fl2.print();

  std::cout << "Appending the value of 204 to the fl2 ..." << std::endl;
  fl2.push_back(204);
  fl2.print();

  std::cout << "Reversing the fl2 list ..." << std::endl;
  fl2.reverse();
  fl2.print();

  std::cout << "Reversing the empty list [fl0] ..." << std::endl;
  fl0.reverse();
  fl0.print();

  std::cout << "Done. Will exit now." << std::endl;
  return 0;
}
