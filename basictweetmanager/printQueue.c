#include "headerA4.h"
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
void printQueue (tweet * head){
    while (head != NULL) {
        printf("%d: Created by %s: %s\n", head->id, head->user, head->text);
        head = head->next;
    }
}
