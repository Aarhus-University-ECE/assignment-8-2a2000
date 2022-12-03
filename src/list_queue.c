#include "list_queue.h"


void init_queue(queue *q)
{
  // Add your init_queue
  q->front = NULL; // dequeue operation happens 
  q->rear = NULL; // enqueue operation happens 
  q->size = 0;
}

int empty(queue *q)
{
  // Add your empty function  
  if (q->size ==0)
  {
    return 1; 
  }
  else {
    return 0; 
  }
  
}

void enqueue(queue *q, int x)
{
  // Add your enqueue function
  // first we creat memory for the node 
  qnode *nRear = (qnode*)malloc(sizeof(qnode));
// assign value to to rear, and set next to be null 
nRear->data = x;
nRear->next = NULL;

// now if the queue is empty, then the new data will be both the front and rear
// but if there is aldready a data waiting then the new one will be rear 

if (q->front == NULL || q->rear == NULL)
{
  q->front = nRear;
  q->rear = nRear;
}
else {
  q->rear->next = nRear;
}
// then we change the size of the queue 
 q->size++; //increment 
 q->rear = nRear; // add the new value 
}

int dequeue(queue *q)
{
  // Add your dequeue function

  // we creat space for the value that will be returned 
  int returned = q->front->data;
  // but if the queue is empty then
  if (q->front = NULL)
  {
    return 0; 
  }
  else{
    q->front = q->front->next; 

    qnode *previousFront = q->front;  // to free the old front 
    free(previousFront);
    q->size --; //size decremented 
  }
  



}
