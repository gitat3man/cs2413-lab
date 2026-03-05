// Question1/student.c
// ------------------------------------------------------------
// CS Lab03 - Reverse Linked List 
//
// TODO:
//   Implement reverseList(head) to reverse a singly linked list.
//
// Rules:
// - Do not allocate new nodes.
// - Do not use recursion.
// - Return the new head pointer.
// ------------------------------------------------------------

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include "student.h"

struct ListNode* reverseList(struct ListNode* head) {
  struct ListNode* prev = NULL;
  struct ListNode* current = head;

    while (current != NULL) {
        struct ListNode* next = current->next; // Store the next node
        current->next = prev; // Reverse the current node's pointer
        prev = current; // Move prev to the current node
        current = next; // Move to the next node
    }

    return prev; // prev is now the new head of the reversed list   
}