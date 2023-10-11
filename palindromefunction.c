struct Node * palindrome(struct Node *head){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr = head;
    int e, s=0,r,p=0;
    while(ptr!=head){
        e = ptr->data;
        s = s*10 + e;
        ptr = ptr->next;
    }
    int n=s;
    while(n>0){
        r = n%10;
        p = p*10 + r;
        n=n/10;
    }
    if(s==p){
        printf("nppp palindrome number");
    }
    else{
        printf("not a palindrome number");
    }
}


palindrome(head);
