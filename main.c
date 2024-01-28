#include <stdio.h>
#include <malloc.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* middleNode(struct ListNode* head) {
    int target = 0;
    int size = 1;
    int counter = 1;

    struct ListNode* iter = (struct ListNode*)malloc(sizeof(struct ListNode));
    iter = head;

    while (iter->next != NULL) {
        iter = iter->next;
        size++;
    }

    //if (size % 2 == 0) { target = size / 2; }
    //else { target = size / 2 + 1; }

    target = size / 2 + 1;

    iter = head;

    while (counter < target) {
        iter = iter->next;
        counter++;
    }

    return iter;

}

int main() {
    printf("Hello, World!\n");
    return 0;
}
