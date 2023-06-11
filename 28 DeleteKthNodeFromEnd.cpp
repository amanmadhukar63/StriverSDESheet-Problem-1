/*
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
*/

Node* removeKthNode(Node* head, int K)
{
    Node *ptr1,*ptr2;
    ptr1=head;
    ptr2=head;
    int count=0;
    for(int i=0;i<K+1;i++){
        if(ptr2){
            ptr2=ptr2->next;
            count++;
        }
    }
    while(ptr2){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        count++;
    }
    if(ptr1==head && count==K) head=head->next;
    else ptr1->next=ptr1->next->next;
    return head;
}
