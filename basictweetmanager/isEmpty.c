#include "headerA4.h"
/******
 isEmpty: checks if queue is empty
 In: tweet * head
 Out: int
 Post: returns 1 if list is empty
 *******/
int isEmpty(tweet * head) {
    if (head == NULL) {
        return 1;
    } else {
        return 0;
    }
}
