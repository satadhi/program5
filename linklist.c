#include<stdio.h>
#include<stdlib.h>



typedef struct Node{
  int data;
  struct Node *next;
} Node;
Node *head = NULL;

Node * insert(Node * head, int data ,int pos ){

  Node *n;
  n = malloc(sizeof(Node));
  n->data = data;
  n->next = NULL;
  Node *temp = head;
  if (head == NULL )
      head = n;
  else if(pos == 0)
       head = n;
  while(temp!= NULL && (--pos) )
      temp = temp->next;
  if(temp == NULL)
      printf("error position\n");
  else
    {
      temp ->next = n->next;
      temp->next = n;
    }
  return head;
}
void show(Node *head){
  Node *temp = head;
  while(temp != NULL && (printf("%d ",temp->data)))
        temp = temp->next;
}
int main()
{

  insert(head, 16, 1);
  insert(head, 32, 1);
  insert(head, 67, 1);
  insert(head, 39, 3);
  insert(head, 36, 3);
  insert(head, 30, 2);
  show(head);
  return 0;
}
