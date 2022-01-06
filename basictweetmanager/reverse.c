#include "headerA4.h"
/******
 reverse: queue is reversed
 In: tweet ** head, tweet ** tail
 Out: void
 Post: queue reversed
 *******/
void reverse (tweet ** head, tweet ** tail){
    tweet* prev = NULL;
    tweet* current = *head;
    tweet* next = NULL;
    while (current != NULL) {
        *tail = *head;
        // Store next
        next = current->next;
 
        // Reverse current node's pointer
        current->next = prev;
 
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    *head = prev;
}
