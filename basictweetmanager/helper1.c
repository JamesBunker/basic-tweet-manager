#include "headerA4.h"
/******
 helper1: makes a node for a new tweet, adding all required information from the user
 In: tweet * tweetList
 Out: tweet * temp
 Post: Memory allocated for node, all info inputed (with unique id) then returned to main
 *******/
tweet * helper1(tweet * tweetList) {
    int userid = 0;
    int asciisum = 0;
    int uniqueId = 0;
    char tempUser[510];
    char tempText[1410];
    int okUser = 0;
    int okText = 0;
    int blankInput = 0;
    char newLineMuncher;

    //allocating memory of size tweet
    tweet * temp = malloc(sizeof (tweet));

    //assigning user inputted values to temp and validating input
    while (okUser == 0) {
        printf("Enter a username: \n");
        if (scanf("%[^\n]%*c", tempUser) == 0) {
            scanf("%c", &newLineMuncher);
            blankInput = 0;
        } else {
            blankInput = 1;
        }
        if (blankInput != 0 && strlen(tempUser) < 51) {
            okUser = 1;
        } else {
            printf("Error...Username too long (greater than 51 characters) or empty\n");
        }
    }
    strcpy(temp->user, tempUser);

    while (okText == 0) {
        printf("Enter the user's tweet: \n");
        if (scanf("%[^\n]%*c", tempText) == 0) {
            scanf("%c", &newLineMuncher);
            blankInput = 0;
        } else {
            blankInput = 1;
        }
        if (blankInput != 0 && strlen(tempText) < 141) {
            okText = 1;
        } else {
            printf("Error...Tweet too long (greater than 141 characters) or empty\n");
        }
    }
    strcpy(temp->text, tempText);


    for (int i = 0; i < strlen(temp->user); i++) {
        asciisum += temp->user[i];
    }

    userid = strlen(temp->text) + asciisum;

    //checking if userid is unique and assigning it a random num otherwise
    while (uniqueId == 0) {
        //current will be used to go through all userids
        tweet * current = tweetList;
        while (current != NULL) {
            if (current->id == userid) {
                userid = 1 + (int) (rand() * 999.0 / RAND_MAX);
                uniqueId = 1;
                current = tweetList;
            } else {
                current = current->next;
            }
        }
        free(current);
        uniqueId = 1;
    }

    temp->id = userid;
    printf("Your computer-generated userid is %d.\n", temp->id);
    temp->next = NULL;
    return temp;
}
