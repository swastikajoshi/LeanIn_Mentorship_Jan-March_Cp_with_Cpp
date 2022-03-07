/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       Node *new_node=new Node(x);
       if(head==NULL)
            return new_node;
        else
        {
            new_node->next=head;
            return new_node;
        }
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       Node *new_node=new Node(x);
       if(head==NULL)
            return new_node;
        
        Node *current=head;
        while(current->next!=NULL)
            current=current->next;
        
        current->next=new_node;
        return head;
        
    }
};
