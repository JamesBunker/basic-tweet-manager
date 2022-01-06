#include "headerA4.h"
/******
 helper2: adds the newly created node to the end of the tweetlist
 In: tweet**tweetList, tweet * node
 Out: void
 Post: node is added to tweet list
 *******/
void helper2(tweet**tweetList, tweet * node) {
    //allocating memory of size tweet
    node->next = NULL;

    //if head is NULL add newNode to start
    if (*tweetList == NULL)
        *tweetList = node;
        //Else, traverse to last node
    else {
        tweet *lastNode = *tweetList;


        //lastNode->next == NULL when end of list
        while (lastNode->next != NULL) {
            lastNode = lastNode->next;
        }

        //add the newNode at the end of the linked list
        lastNode->next = node;
    }
}
