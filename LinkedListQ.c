#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    double value;
    struct ListNode* next;
};
struct LinkedList {
    struct ListNode* head;
};

int countNodes(struct LinkedList* list){
    int nodeCount = 0;
    struct ListNode* curr = list-> head;
    while (curr != NULL){
        nodeCount++;
        curr = curr->next;
    }
    return nodeCount;
}