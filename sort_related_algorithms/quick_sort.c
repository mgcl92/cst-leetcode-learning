// Quick Sort
#include <stdlib.h>
void quickSort(int *arr, int l, int r)
{
	if (l >= r)
		return;
	
	int position = partition(arr, l, r);
	
	quickSort(arr, l, position - 1);
	quickSort(arr, position + 1, r);
	
}

int partition(int *arr, int l, int r) 	// 将切分算法随机化, 主打一个学以致用 
{
	void swap(int *arr, int p, int q);
	
	int pivot = l + rand() % r, temp = arr[pivot];
	
	swap(arr, l, pivot);
	int i = l + 1, j = r;
	
	while (i < j)		// i == j 时退出循环 
	{
		while (i < j && arr[j] > temp)
			-- j;
		while (i < j && arr[i] < temp)
			++ i;
		
		if (i < j)  //  上述两个循环退出条件不是唯一的，但均有可能是因为 i == j 而退出，但此时进行交换并不影响结果, 权衡一次交换的代价以及多次判断的代价 
			swap(arr, i, j);
	}
	
	arr[i] = temp;		// 基准数归位 
	
	return i;
}

void swap(int *arr, int p, int q)
{
	int temp = arr[p];	// temp 作为辅助变量 
	arr[p] = arr[q];
	arr[q] = temp;
}
