#include"push_swap.h"

// // a_listの先頭に番兵ノードを追加する関数
// void	add_sentinel_node(a_list** head, a_list **tail)
// {
// 	a_list* sentinel_node;

// 	sentinel_node = create_node(head, -1);
// 	sentinel_node->data = 0; // ダミーデータ
// 	sentinel_node->s_index = -1; // ダミーインデックス（存在しないことを表す値）
// 	sentinel_node->prev = NULL;
// 	*head = sentinel_node;
// 	sentinel_node->next = NULL;
// 	*tail = sentinel_node;
// }

void a_list_tail_add(a_list **head, a_list** tail, int value, int index)
{
	a_list	*new_node;
	new_node = create_node(head, index);
	new_node->data = value;
	new_node->next = NULL;
	new_node->s_index = index;
	if (*tail == NULL) {
		*tail = new_node;
		new_node->prev = NULL;
	} else {
		a_list* p = *tail;
		p->next = new_node;
		new_node->prev = p;
		*tail = new_node;
	}
}

void a_list_head_add(a_list** tail, a_list** head, int value, int index)
{
	a_list	*new_node = create_node(head, index);
	new_node->data = value;
	new_node->s_index = index;
	new_node->prev = NULL;
	if (*head == NULL) {
		*head = new_node;
		new_node->next = NULL;
		*tail = new_node;
	} else {
		a_list* p = *head;
		p->prev = new_node;
		new_node->next = p;
		*head = new_node;
	}
}