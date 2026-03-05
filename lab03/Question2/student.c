// Question2/student.c
// ------------------------------------------------------------
// CS Lab03 - Swap Nodes in Pairs 
//
// TODO:
//   Implement swapPairs(head) to swap every two adjacent nodes.
//
// Rules:
// - Do not allocate new nodes.
// - Do not swap values; swap nodes (rewire pointers).
// - Return the new head pointer.
// ------------------------------------------------------------
#include "student.h"

struct ListNode* swapPairs(struct ListNode* head) 
struct ListNode* reverselist(struct ListNode* head) {
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