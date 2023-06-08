#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

void deleteNode(LinkedListNode<int> * node) {
    if(node == NULL){
        // Linked List is Empty
        return;
    }

    if(node->next == NULL){
        // Only one Element present
        node=NULL;
        return;
    }

    /*
    | Data1 |next2| -> |Data2|Next3| -> |Data|next| -> NULL 
     2nd Node from remove this
     Data1 | next2 = data1 -> next2 ->next3  | 
    */
    
    node->data=node->next->data;
    LinkedListNode<int> *temp=node->next;
    node->next = temp->next;
    delete temp;
}
