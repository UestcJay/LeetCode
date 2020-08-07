class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (!head || !(head->next))
			return head;
		ListNode* dummy = new ListNode(-1);
		ListNode* pre = dummy;
		dummy->next = head;
		while (pre->next)
		{
			ListNode* cur = pre->next;
			while (cur->next&& cur->next->val == cur->val)
				cur = cur->next;
			if (pre->next != cur)
				pre->next = cur->next;
			else
				pre = pre->next;
		}
		return dummy->next;

	}