struct ListNode {
    double value;
    struct ListNode* next;
};
struct LinkedList {
    struct ListNode* head;
};

double findMedian(struct ListNode* startNode, int numNodes){
    struct ListNode* curr = startNode;
    int midPoint = numNodes/2;
    if (numNodes % 2 == 1){
        for (int i = 0; i < midPoint; i++){
            curr = curr->next;
        }
        return curr->value;
    } else{
        for (int i = 0; i < midPoint-1; i++){
            curr = curr->next;
        }
        int temp = curr->value;
        curr = curr->next;
        return (temp + curr->value)/2;
    }
}
