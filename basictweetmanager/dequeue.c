#include "headerA4.h"
/******
 dequeue: removes tweet from front of queue
 In: tweet ** head, tweet ** tail
 Out: void
 Post: if queue has tweet at head it is removed
 *******/
void dequeue (tweet ** head, tweet ** tail){

    tweet * temp = NULL;
    temp = *head;
    if(*tail == NULL){
        return;
    }
    else{
        *head = temp->next;   
    }  
    free(temp);
}
