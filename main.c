#include "LinkedList.h"

int main(int argc, char* argv[])
{
    Node *linkedList = NULL;
       
    for (int i = 0; i <= 10; i++)
    {
        int num = rand() % 100;
        pushNode(num,&linkedList);
    }
    
    printList(linkedList);
    printf("POP node : %d\n",nodePop(&linkedList));
    printf("List after pop:\n");
    printList(linkedList);
    printf("Remove the number at index: 5\n");
    printf("The value removed was: %d\n",deleteByIndex(&linkedList, 5));
    printList(linkedList);
    
    deleteList(linkedList);
    return 0;
}
