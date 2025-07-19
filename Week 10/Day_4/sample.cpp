#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // Create a dummy node to act as the start of the merged list
        ListNode dummy(0);
        ListNode* tail = &dummy;

        // Traverse both lists and append the smaller value to the merged list
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }

        // Append the remaining elements of l1 or l2
        if (l1 != nullptr) {
            tail->next = l1;
        } else {
            tail->next = l2;
        }

        return dummy.next;
    }
};

// Helper function to print the linked list
void printList(ListNode* node) {
    while (node != nullptr) {
        std::cout << node->val << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create two sorted linked lists
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(3);
    l1->next->next = new ListNode(5);

    ListNode* l2 = new ListNode(2);
    l2->next = new ListNode(4);
    l2->next->next = new ListNode(6);

    // Merge the lists
    Solution solution;
    ListNode* mergedList = solution.mergeTwoLists(l1, l2);

    // Print the merged list
    printList(mergedList);

    // Clean up memory
    while (mergedList != nullptr) {
        ListNode* temp = mergedList;
        mergedList = mergedList->next;
        delete temp;
    }

    return 0;
}
