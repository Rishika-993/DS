// Insert at begining 

struct Node * insertionAtFirst(struct Node *head , int data){
    struct Node *ptr;
    ptr = (struct Node *) malloc(sizeof(struct Node ));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

head = insertionAtFirst(head, 56);

