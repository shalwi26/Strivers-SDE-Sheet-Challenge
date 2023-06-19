/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/
Node* intersection(Node *head)
{
    if(head == NULL)
     return NULL;
    Node* slow=head;
    Node* fast=head;
    while(slow != NULL && fast != NULL)
    {
        fast=fast->next;
        if(fast != NULL)
         fast=fast->next;
        slow=slow->next;
        if(slow==fast)
         return slow;
    }
    return NULL;
}

Node *firstNode(Node *head)
{
    Node* inter=intersection(head);
    if(inter == NULL)
     return NULL;
    Node* slow=head;
    while(slow != inter)
    {
        slow=slow->next;
        inter=inter->next;
    }
    return slow;
}
