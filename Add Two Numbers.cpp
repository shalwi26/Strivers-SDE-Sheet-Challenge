/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    Node *res = new Node(-1);
    Node *curr = res;
    int carry = 0;
    int sum = 0;
    while(num1 && num2){
        sum = num1->data + num2->data + carry;
        Node *node = new Node(sum%10);
        carry = sum/10;
        curr->next = node;
        curr = curr->next;
        num1 = num1->next;
        num2 = num2->next;
    }
    while(num1){
        sum = num1->data + carry;
        Node *node = new Node(sum%10);
        carry = sum/10;
        curr->next = node;
        curr = curr->next;
        num1 = num1->next;
    }
    while(num2){
        sum = num2->data + carry;
        Node *node = new Node(sum%10);
        carry = sum/10;
        curr->next = node;
        curr = curr->next;
        num2 = num2->next;
    }
    if(carry != 0){
        Node *node = new Node(carry);
        curr->next = node;
        curr = curr->next;
    }
    return res->next;
}
