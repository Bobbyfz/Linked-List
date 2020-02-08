#include "LinkedList.h"

Node* pushNode(int data,Node** pHead)
{
    Node* pNode = (Node*)malloc(sizeof(Node));
    
    if (pNode != NULL)
    {
        pNode -> data = data;
        pNode -> next = *pHead;
        *pHead = pNode;
    }
    return pNode;
}

void printList(Node* pNode)
{
    while (pNode != NULL)
    {
        printf("%-7d",pNode -> data);
        pNode = pNode -> next;
    }
    printf("\n");
}

void deleteList(Node* pNode)
{
    while (pNode != NULL)
    {
        Node* tempNode = pNode;
        pNode = pNode -> next;
        free(tempNode);
    }
}

int nodePop(Node** phNode)
{
    if (*phNode == NULL)
    {
        return -1;
    }
    
    Node* retNode = *phNode;
    
    int num = retNode -> data;
    (*phNode) = (*phNode) -> next;
    
    free(retNode);
    
    return num;
}

int deleteByIndex(Node** phNode, int index)
{
   if (phNode == NULL)
   {
       return - 1;
   }
    Node* temp = *phNode;
    
    if (index == 0)
    {
        *phNode = temp -> next;
        free(temp);
        return -1;
    }
    for (int i = 0; temp != NULL && i < index - 1;i++)
    {
        temp = temp -> next;
    }
    if (temp == NULL || temp -> next == NULL)
    {
        return -1;
    }
    
    Node* next = temp ->next -> next;
    int num = temp -> next ->data;
    free(temp -> next);
    temp -> next = next;
    
    return num;
}


