#include <stdio.h>

typedef struct ListElement* ListElementPtr;
typedef struct ListElement
{
  int data;
  ListElementPtr psNext;
}ListElement;

typedef struct List* ListPtr;
typedef struct List
{
  ListElementPtr psHead;
}List;

int main ()
{
  // create a list
  List sMyList;

  // create some nodes
  ListElement sNode1, sNode2, sNode3;

  // initialize the list to empty
  sMyList.psHead = NULL;

  // initialize the nodes
  sNode1.data = 20;
  sNode1.psNext = NULL;
  sNode2.data = 40;
  sNode2.psNext = NULL;
  sNode3.data = 50;
  sNode3.psNext = NULL;

  // TODO: place sNode3 into the list








  // TODO: place sNode1 into the list so that it is in front of sNode3
  // psHead should point to the first node in the list









  // TODO: place sNode2 into the list so that it is at the end of
  // the list
  // psHead should point to the first node in the list













  // TODO: Print the list's data to the screen, one integer per line
  // REQUIRED: Declare a new pointer to walk the list













  // TODO: remove the middle node from the list















  return 0;
}