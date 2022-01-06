#include "headerA4.h"
/******
 enqueue: adds tweet to end of queue
 In: tweet ** head, tweet ** tail, tweet * node
 Out: void
 Post: tweet added to tail
 *******/
void enqueue(tweet ** head, tweet ** tail, tweet * node) {
    tweet * temp = NULL;
    temp = *tail;
    if(*head == NULL){ 
        *head= node;
    }
    else{
        temp->next = node;  
        *tail = node;
    }  
}
