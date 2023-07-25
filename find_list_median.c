#include"push_swap.h"

// 中央値を計算する関数
int find_list_median(a_list **a_head, int size)
{
    // 中央値の位置を計算（偶数個の場合は中央の2つの要素の平均を取る）
    int mid = size / 2;//小数点切り捨て
    int median = 0;
    int count = 0;

    // リストを走査して中央値を求める
    a_list	*current = *a_head;
    while (current != NULL)
    {
        if (count == mid)
        {
            median = current->data;
            break;
        }
        count++;
        current = current->next;
    }
    return (median);
}