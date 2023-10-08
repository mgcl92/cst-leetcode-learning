// Count Sort
/*
 * 计数排序是一类利用空间换时间的排序算法 
*/ 
void pesudoConutSortV1(int *arr, int n)  	// 该实现是不稳定的, 只是单纯的对数值的计数, 对纯数无影响 
{
	int counter[n] = {0};
	
	for (int i = 0; i < n; ++ i)		// 统计数值为 i 的元素个数, i = 1, 2, ..., n - 1, 假设 arr 数组中取值 为 [0, n - 1] 
	{
		++ counter[arr[i]];
	}
	
	for (int i = 0, j = 0; i < n; ++ i)		// 重新整理数组 
	{
		while (counter[i] > 0)
		{
			arr[j ++] = i;
		}
	}
	
}

void pesudoCountSortV2(int *arr, int n)		// 主要思想是利用队列,可用二维数组直接代替，空间效率再 O(n^2), 此处暂不实现 
{
	
}

void countSort(int *arr, int n)		// 区别就在于计数排序并不是把计数数组的下标直接作为结果输出，
									// 而是通过计数的结果，计算出每个元素在排序完成后的位置，然后将元素赋值到对应位置。
{
}

