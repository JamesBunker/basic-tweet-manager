#include "headerA4.h"
int main(int argc, char** argv) {
    int testingFunction = 1;
    int empty = 0;

    tweet * tweetList = NULL;
    tweet * head = NULL;
    tweet * tail = NULL;
    //Creating the linked list
    for (int b = 0; b < 3; b++) {
        helper2(&tweetList, helper1(tweetList));
    }

    //Finding head and tail 
    if (tweetList != NULL) {
        head = tweetList;
    }
    while (tweetList->next != NULL) {
        tweetList = tweetList->next;
    }
    tail = tweetList;

    //Testing all functions 3 times
    while (testingFunction <= 2) {
        for (int i = 1; i <= 3; i++) {
            switch (testingFunction) {
                case 1:
                    printf("\nTesting [enqueue] function\n");
                    printf("Iteration [%d]: [Node]: %s\n", i, "node");
                    enqueue(&head, &tail, helper1(head));
                    printf("After enqueue, queue looks like:\n");
                    printQueue(head);
                    break;
                case 2:
                    printf("\nTesting [dequeue] function\n");
                    printf("Iteration [%d]:\n", i);
                    dequeue(&head, &tail);
                    printf("After dequeue, queue looks like:\n");
                    printQueue(head);

                    printf("\nTesting [isEmpty] function\n");
                    printf("Iteration [%d]: testing with enqueued list after %d dequeues\n", i, i);
                    empty = isEmpty(head);
                    if (empty == 0) {
                        printf("SUCCESS: list is not empty\n");
                    } else {
                        printf("SUCCESS: list is empty\n");
                    }
                    printf("Using printQueue to verify queue contents\n");
                    printQueue(head);

                    printf("\nTesting [sortID] function\n");
                    printf("Iteration [%d]: testing with enqueued list after %d dequeues\n", i, i);
                    sortID(&head, &tail);
                    printQueue(head);

                    printf("\nTesting [reverse] function\n");
                    printf("Iteration [%d]: testing with enqueued list after %d dequeues\n", i, i);
                    reverse(&head, &tail);
                    printQueue(head);

                    printf("\nTesting [sortUsername] function\n");
                    printf("Iteration [%d]: testing with enqueued list after %d dequeues\n", i, i);
                    sortUsername(&head, &tail);
                    printQueue(head);
                    break;
            }
        }
        testingFunction++;
    }
    while (head != NULL) {
        tweet * next = head->next;
        free(head);
        head = next;
    }
    
    return (0);
}
