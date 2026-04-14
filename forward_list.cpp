#include "forward_list.h"
#include <iostream>

ListNode* push_front(ListNode* head, int value) {
	ListNode* new_head = new ListNode;
	new_head->val = value;
	new_head->next = head;
	return new_head;
}

ListNode* pop_front(ListNode* head) {
	if (!head) return head;
	ListNode* new_head = head->next;
	delete head;
	return new_head;
}

int front(ListNode* head) {
	return head->val;
}

bool empty(ListNode* head) { return !head; }

void print_list(ListNode* head) {
	if (!head) { std::cout << "[]" << std::endl; return; }
	std::cout << '[';
	while (head->next) {
		std::cout << head->val << ", ";
		head = head->next;
	}
	std::cout << head->val << ']' << std::endl;
}

void insert_after(ListNode* node, int value) {
	ListNode* new_node = new ListNode;
	new_node->val = value;
	ListNode* temp = node->next;
	node->next = new_node;
	new_node->next = temp;
}

void delete_after(ListNode* node) {
	ListNode* deleteNode = node->next;
	node->next = node->next->next;
	delete deleteNode;
}

ListNode* reverse(ListNode* head) {
	if (!head || !head->next) return head;
	ListNode *prev = head, *curr = head->next;
	prev->next = nullptr;
	while (curr->next) {
		ListNode* temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
	}
	curr->next = prev;
	return curr;
}

void clear(ListNode* head) {
	while (head) {
		ListNode* temp = head;
		head = head->next;
		delete temp;
	}
}
