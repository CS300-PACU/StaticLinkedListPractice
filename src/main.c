/**********************************************************************
 File name:  	main.c
 Author:     	chadd williams, Shereen Khoja, Doug Ryan
 Date:       	9/11/22
 Class:      	CS300
 Assignment: 	In Class Example
 Purpose:    	Static Linked List Practice
 *********************************************************************/

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
  ListElementPtr psTail;
  ListElementPtr psCurrent;
}List;

/**********************************************************************
 Function:    main

 Description: Build a list and practice some pointer fun
 
 Parameters:  None
 
 Returned:    int, exit status
 *********************************************************************/
int main ()
{
  // create a list
  List sMyList;

  // create some nodes
  ListElement sNode1, sNode2, sNode3;

  // initialize the list to empty
  sMyList.psCurrent = sMyList.psHead = sMyList.psTail = NULL;

  // initialize the nodes
  sNode1.data = 20;
  sNode1.psNext = NULL;
  sNode2.data = 40;
  sNode2.psNext = NULL;
  sNode3.data = 50;
  sNode3.psNext = NULL;

  // TODO: place sNode3 into the list





  // TODO: place sNode1 into the list so that it is in front of sNode3
  // Make psCurrent point to the front of the list
  // psHead should point to the first node in the list
  // psTail should point to the last node in the list




  // TODO: place sNode2 into the list so that it is at the end of
  // the list
  // Make psCurrent point to the front of the list
  // psHead should point to the first node in the list
  // psTail should point to the last node in the list





  // TODO: Print the list's data to the screen, one integer per line
  // REQUIRED: Use sMyList.psCurrent to walk the list




  // TODO: remove the middle node from the list





  return 0;
}
