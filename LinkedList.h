#ifndef LINKEDLIST
#define LINKEDLIST

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};
typedef struct node Node;

Node* pushNode (int data,Node** pHead);
void printList(Node* pNode);
void deleteList(Node* pNode);
int nodePop(Node** phNode);
int deleteByIndex(Node** phNode,int index);

#endif
