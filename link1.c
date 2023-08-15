#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
  while (ptr != NULL)
  {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
  }
}
struct Node *insert_beg(struct Node *head, int data)
{
  struct Node *ptr = (struct node *)malloc(sizeof(struct Node));
  ptr->next = head;
  ptr->data = data;
  return ptr;
}

struct Node *insertAtIndex(struct Node *head, int data, int index)
{
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  struct Node *p = head;
  int i = 0;

  while (i != index - 1)
  {
    p = p->next;
    i++;
  }
  ptr->data = data;
  ptr->next = p->next;
  p->next = ptr;
  return head;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  struct Node *p = head;

  while (p->next != NULL)
  {
    p = p->next;
  }
  p->next = ptr;
  ptr->next = NULL;
  return head;
}
// Case 1: Deleting the first element from the linked list
struct Node *deleteFirst(struct Node *head)
{
  struct Node *ptr = head;
  head = head->next;
  free(ptr);
  return head;
}
// Case 2: Deleting the element at a given index from the linked list
struct Node *deleteAtIndex(struct Node *head, int index)
{
  struct Node *p = head;
  struct Node *q = head->next;
  for (int i = 0; i < index - 1; i++)
  {
    p = p->next;
    q = q->next;
  }

  p->next = q->next;
  free(q);
  return head;
}
// Case 3: Deleting the last element
struct Node *deleteAtLast(struct Node *head)
{
  struct Node *p = head;
  struct Node *q = head->next;
  while (q->next != NULL)
  {
    p = p->next;
    q = q->next;
  }

  p->next = NULL;
  free(q);
  return head;
}
// circular
struct Node *insertAtFirst(struct Node *head, int data)
{
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;

  struct Node *p = head->next;
  while (p->next != head)
  {
    p = p->next;
  }
  // At this point p points to the last node of this circular linked list

  p->next = ptr;
  ptr->next = head;
  head = ptr;
  return head;
}

int main()
{
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fourth;

  // Allocate memory for nodes in the linked list in Heap
  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));

  // Link first and second nodes
  head->data = 7;
  head->next = second;

  // Link second and third nodes
  second->data = 11;
  second->next = third;

  // Link third and fourth nodes
  third->data = 41;
  third->next = fourth;

  // Terminate the list at the third node
  fourth->data = 66;
  fourth->next = NULL;

  linkedListTraversal(head);

  head = insert_beg(head, 56);
  head = insertAtIndex(head, 32, 4);
  head = insertAtEnd(head, 45);
  linkedListTraversal(head);

  head = deleteFirst(head);
  head = deleteAtIndex(head, 2);
  head = deleteAtLast(head);

  linkedListTraversal(head);

  return 0;
}
