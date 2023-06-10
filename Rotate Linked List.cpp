/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

pair<Node*,int> count (Node* head)  //find the tail of the linked list and length

{

 

     Node* cur = head;

     int c = 0;

     Node* tail = head;

     while(cur!=NULL)

     {

          tail = cur;

          cur = cur->next;

          c++;

     }

     return {tail,c};

}

 

Node* newtail(Node* head, int k)  //find the new tail.

{

     Node* curr = head;

     for(int i=1;i<k;i++)

     curr = curr->next;

     return curr;

}

 

Node *rotate(Node *head, int k) {

     // Write your code here.

     pair<Node*,int> p = count(head);

     int c = p.second;

     k = k%c;

 

     if(head==NULL||head->next==NULL|| k==0 )

     return head;

 

     Node* tail = p.first;  //previous tail

     Node* t = newtail(head,c-k);  //new tail

 

     tail->next = head;  //tail er matha head e jurlam

     head = t->next;   //

     t->next=NULL;

 

     return head;

 

}
