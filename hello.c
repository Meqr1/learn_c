#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
  struct node *prev;
};

void append_to_head(struct node **head_ref, int new_data) {
  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  newNode->data = new_data;
  newNode->next = NULL;
  newNode->prev = NULL;

  if (*head_ref == NULL) {
    *head_ref = newNode;
    return;
  }

  struct node *head = *head_ref;

  newNode->next = head->next;
  newNode->prev = head;
  head->next = newNode;
  if (newNode->next != NULL) {
    newNode->next->prev = newNode;
  }
}

void push(struct node **head_ref, int new_data) {
  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  newNode->data = new_data;
  newNode->next = NULL;
  newNode->prev = NULL;

  if (*head_ref == NULL) {
    *head_ref = newNode;
    return;
  }

  struct node *last = *head_ref;
  while (last->next != NULL) {
    last = last->next;
  }

  last->next = newNode;
  newNode->prev = last;
}

void printLL(struct node *node) {
  while (node != NULL) {
    printf("%d ", node->data);
    node = node->next;
  }
  printf("NULL\n");
}

int main() {
  struct node *head = NULL;

  push(&head, 10);
  push(&head, 20);
  push(&head, 30);

  printLL(head);

  return 0;
}
