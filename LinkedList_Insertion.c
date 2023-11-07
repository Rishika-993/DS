// Insert at begining 

struct Node * insertionAtFirst(struct Node *head , int data){
    struct Node *ptr;
    ptr = (struct Node *) malloc(sizeof(struct Node ));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

head = insertionAtFirst(head, 56);

//Insertion At Index
struct Node *insertAtindex(struct Node *head, int data, int index){
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node ));
    struct Node *p = head;
    int i=0;
    while(i!=index){
        p=p->next;
        i++;
    }
    ptr->data = data;
    ptr->next=p->next;
    p->next = ptr;
    return head;
}
head = insertionAtFirst(head, 56, 1);
// Insert at end

// Insert At End
struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
 
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    // Allocate memory for nodes in the linked list in heap
    head = (struct Node *) malloc(sizeof(struct Node
    ));
    second = (struct Node *) malloc(sizeof(struct Node
    ));
    third = (struct Node *) malloc(sizeof(struct Node
    ));

    // Link first and second nodes
    head -> data = 7;
    head -> next = second;

    // Link second and third nodes
    second -> data = 11;
    second -> next = third;

    // Terminate the list at the third node
    third -> data = 66;
    third -> next = NULL;

    return 0;
}
