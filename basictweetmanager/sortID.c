#include "headerA4.h"
/******
 sortID: queue id's are sorted in ascending order
 In: tweet ** head, tweet ** tail
 Out: void
 Post: queue id's are sorted
 *******/
void sortID(tweet ** head, tweet ** tail) {
    tweet *node=NULL, *temp = NULL;
    int tempvar;
    node = *head;
    while(node != NULL)
    {
        temp=node; 
        while (temp->next !=NULL) 
        {
           if(temp->id > temp->next->id)// compare the ids
            {
              tempvar = temp->id;
              temp->id = temp->next->id;// swap the ids
              temp->next->id = tempvar;
            }
         temp = temp->next;    // move to the tweet
        }
        node = node->next;    // move to the next tweet
    }
}

