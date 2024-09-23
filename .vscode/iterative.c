#include<stdio.h>
#include<stdio.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;
void insert(Node**head, int data){
    Node*newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = *head;
    *head= newNode;

}
void printList(Node* node){
    for(;node != NULL;node= node->next)
    printf("%d->",node->data);
    printf("NULL\n");

}
void reverseIterative(Node**head){
    Node*prev = NULL,*current= *head,*next= NULL;
    while(current){
        next= current->next;
        current->next= prev;
        prev= current;
        current= next;

    }
    *head= prev;

}
void reverseRecursive(Node**head){
    if(!*head || !(*head)->next)return;
    Node*first = *head,*rest = first->next;
    reverseRecursive(&rest);
    first->next->next = first;
    first->next= NULL;
    *head = rest;


}
int main(){
    Node*head = NULL;
    int n,data;
    printf("Enter the numberof elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        insert(&head,data);

    }
    printf("Original linked list:");
    printList(head);
    reverseIterative(&head);
    printf("Reversed linkrd list (iterative):");
    printList(head);
    reverseRecursive(&head);
    printf("Reversed linked list (recursive):");
    printList(head);
    return 0;

    }
    