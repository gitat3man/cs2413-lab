/*
 * Assignment 2 / Question 2 / student.c
 * ------------------------------------------------------------
 * Check if a BST is an AVL tree
 *
 * Implement:
 *   bool isAVL(struct TreeNode* root);
 *
 * AVL (for this assignment) means:
 * 1) strict BST property (no duplicates)
 * 2) height-balanced: abs(height(left) - height(right)) <= 1 at every node
 *
 * Rules:
 * - Do NOT allocate new nodes.
 * - Do NOT modify the tree.
 * - Do NOT print anything.
 *
 * Build/Run (from Assignment2 folder):
 *   make run2
 */

#include <stdbool.h>
#include <stddef.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool isAVL(struct TreeNode* root) {
    int checkAVL(struct TreeNode* node, long min, long max) {
        if (node == NULL) 
            return -1;

        if (node -> val <= min || node -> val >= max) 
            return -2;
            
        int leftH = checkAVL(node -> left, min, node -> val);
        int rightH = checkAVL(node -> right, node -> val, max);
        
        if (leftH == -2 || rightH == -2) return -2;

        int diff = leftH - rightH;
        if (diff < -1 || diff > 1) return -2;

        return (leftH > rightH ? leftH : rightH) + 1;

        bool isAVL(struct TreeNode* root) {
            return checkAVL(root, INT_MIN, INT_MAX) != -2;
        }
    
    (void)root;
    return false;

