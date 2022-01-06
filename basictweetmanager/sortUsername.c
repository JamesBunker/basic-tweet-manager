#include "headerA4.h"
/******
 sortUsername: queue usernames are sorted in ascending order by ascii
 In: tweet ** head, tweet ** tail
 Out: void
 Post: queue usernames are sorted
 *******/
void sortUsername(tweet ** head, tweet ** tail) {
    tweet *node = NULL, *temp = NULL;
    char tempvar[44];
    node = *head;
    while (node != NULL) {
        temp = node;
        while (temp->next != NULL)
        {
            if (temp->user[0] > temp->next->user[0])// compare usernames by ascii
            {
                strcpy(tempvar,temp->user);
                // swapping usernames
                strcpy(temp->user,temp->next->user);

                strcpy(temp->next->user,tempvar);
            }
            temp = temp->next; // move to the next tweet
        }
        node = node->next; // move to the tweet
    }
}
