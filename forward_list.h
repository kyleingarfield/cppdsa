#ifndef FORWARD_LIST
#define FORWARD_LIST
struct ListNode {
	int val;
	ListNode* next;
};

ListNode* push_front(ListNode* head, int value);

ListNode* pop_front(ListNode* head);

int front(ListNode* head);

bool empty(ListNode* head);

void print_list(ListNode* head);

void insert_after(ListNode* node, int value);

void delete_after(ListNode* node);

ListNode* reverse(ListNode* head);

void clear(ListNode* head);
#endif
