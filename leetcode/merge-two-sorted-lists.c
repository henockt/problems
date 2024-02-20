/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL) {
        return list2;
    }
    
    if (list2 == NULL) {
        return list1;
    }

    struct ListNode* head = list1;
    if (list1->val > list2->val) {
        head = list2;
    }

    // prep prev pointer to left addition
    struct ListNode* prev = list2;
    if (list1->val > list2->val) {
            struct ListNode* tmp = list1;
            list1 = list2;
            list2 = tmp;
    }
    struct ListNode* a = list1->next;
    list1->next = list2;
    prev = list1;
    list1 = a;

    while (list1 != NULL) {
        // always add to left
        if (list1->val > list2->val) {
            struct ListNode* tmp = list1;
            list1 = list2;
            list2 = tmp;
        }

        struct ListNode* a = list1->next;
        list1->next = list2;
        prev->next = list1;
        prev = prev->next;
        list1 = a;
    }

    return head;
}