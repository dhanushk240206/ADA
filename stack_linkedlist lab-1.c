#include <stdio.h>
#include <stdlib.h>

struct node 
{
   int data;
   struct node * next;
};

struct node* create_node (int data){
    struct node*new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next=NULL;

    return new_node;
    
}

struct node* push(struct node* top,int data){
     struct node*new_node = create_node(data);
     if(top == NULL){
     top = new_node;
     }
     else{
        new_node -> next = top;
        top = new_node;
     }

     return top;

             
}


struct node * pop(struct node* top){
    struct node *temp=top;
    if(top == NULL){
        printf("Emptyy stackkk");
    }
    else{
        top=top->next;
        free(temp);
    }
    return top;

}

void display(struct node* top){
    struct node *temp=top;
    if(top == NULL){
        printf("Emptyy stackkk");
    }
    else{
        while(temp != NULL){
            printf("%d->",temp->data);
            temp= temp->next;
        }
        printf("NULL\n");

}
}

void main(){
      struct node * top = NULL;
      top = push (top,10);
      top = push (top,20);
      top = push (top,30);
      top = push (top,40);
      top = push (top,50);
      display (top);
      top = pop (top);
    display (top);
       


}
