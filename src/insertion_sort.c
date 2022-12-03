#include "insertion_sort.h"
#include "linked_list.h"
#include "assert.h"


void sort(linked_list *llPtr)
{
 // Add your sort function here

   // an insertion sort function for a singly linked list of integers
   // the integers are sorted in the final linked
   // list from smallest to largest.


   // three node pointers 
   node_t* pcurr = llPtr->head->next; 
   node_t* ppre = llPtr->head;  
   node_t* temp; // a helper node 
 
 // two nested while loops
 
   // the outerloop will run throug all node until NULL  
 while (pcurr != NULL) // current must not be NULL 
 
   
   if (pcurr->data < ppre->data )  //  if it's not sorted 
   {
      ppre->next = pcurr->next; // now pre is pointing to currents next element 

      //look for where p_curr belongs by runing through the list
      //and find where p_curr is greater or equal to current value 

      temp = llPtr->head;
       while (temp->next->data <= pcurr->data) {
            temp = temp->next;
   }
      
    // if first element needs to be swapped.
        if (llPtr->head==temp) {
            pcurr->next=llPtr->head;
            llPtr->head = pcurr;

        } else {
            //Put curr inbetween temp and temp.next.
            pcurr->next = temp->next;
            temp->next = pcurr;
        }
    }
    //prev always points to largest element that has been sorted.
    //check the next element in the list.
    
    ppre = pcurr;
    pcurr = ppre->next;
}