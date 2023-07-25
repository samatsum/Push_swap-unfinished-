
#include "push_swap.h"

// typedef struct Node
// {
// 	int data;
// 	int s_index;
// 	struct Node* next;
// 	struct Node* prev;
// } a_list;

void	connect_a_tail_to_a_head(a_list* a_tail, a_list* a_head)
{
	a_tail->next = a_head;
	a_head->prev = a_tail;
}

void print_a_list(a_list* a_head)
{
	printf("a_List: ");
	int i = 0;
	while (i < 12) {
		printf("%d ", a_head->data);
		a_head = a_head->next;
		i++;
	}
	printf("\n");
}

void	ft_push_swap(int argc, char **argv)
{
	int		index;
	int		array_a[argc - 1];
	a_list* a_tail = NULL;
	a_list* a_head = NULL;
	// b_list* b_tail = NULL;
	// b_list* b_head = NULL;
	//If argv is not exist
	if (argc < 2)
		print_error();
	index = 0;
	while(++index != argc)
		array_a[index - 1] = ft_atoi_int(argv[index]);
	//IF argv is only one.
	if (argc == 2)
		swap_one();
	//番兵ノード追加
	//add_sentinel_node(&a_head, &a_tail);
	index = 0;
	a_list_a_head_add(&a_tail, &a_head, array_a[index], index);
	while(++index < argc - 1)
		a_list_a_tail_add(&a_head, &a_tail, array_a[index], index);
	connect_a_tail_to_a_head(a_tail, a_head);
	print_a_list(a_head);//入れ替え前
	//IF argc is only three.
	if (argc == 3)
		swap_two(&a_head);
	//IF argc is only four.
	if (argc == 4)
		swap_three(&a_head);
	//IF argc is less than seven.
	if (argc <= 7 && argc > 4)
		swap_less_than_six(&a_head, argc - 1);
	// //IF argc is more than eight.
	// else if (argc >= 8)
	// 	swap_more_than_seven(&a_head, argc);
	print_a_list(a_head);//入れ替え後
	// メモリの解放
	a_list* current = a_head;
	int i = 0;
	while (i < argc - 1) {
		a_list* temp = current;
		current = current->next;
		free(temp);
		i++;
	}
}
//free()忘れが無いかの確認
__attribute__((destructor))
static void destructor() {
    system("leaks -q a.out");
}

int main(int argc, char **argv) {
	
	ft_push_swap(argc, argv);

	return (0);
}
