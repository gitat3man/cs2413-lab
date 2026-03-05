// Question3/student.c
// ------------------------------------------------------------
// CS Lab03 - Linked List Cycle 
//
// TODO:
//   Implement hasCycle(head) using fast/slow pointers.
//
// Rules:
// - Do not allocate new nodes.
// - Do not modify the list.
// ------------------------------------------------------------

#include "student.h"

bool hasCycle(struct ListNode *head) {
    struct ListNode* prev = NULL;
    struct ListNode* current = head;

    while (current != NULL) {
        struct ListNode* next = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
    }
    return prev; 
}