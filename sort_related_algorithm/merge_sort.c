// Merge Sort
 
void mergeSort(int *arr, int *res, int l, int r) 	// 为了简化算法的实现, 引入 res 数组存放临时结果 
{
	int len = r - l + 1; 
	if (len == 0 || len == 1)
		return;
		
	int mid = (l + r) / 2;
	mergeSort(arr, res, l, mid);
	mergeSort(arr, res, mid + 1, r);
	
	merge(arr, res, l, mid, mid + 1, r);
}

void merge(int *arr, int *res, int l1, int r1, int l2, int r2)
{
	int cursor = l1;
	for (;l1 <= r1, l2 <= r2;)
	{
		if (arr[l1] < arr[l2])
		{
			res[cursor] = arr[l1 ++];
		}
		else 
		{
			res[cursor] = arr[l2 ++];
		}
		
		++ cursor;
	}
	
	while (l1 <= r1)
	{
		res[cursor ++] = arr[l1];
	}
	
	while (l2 <= r2)
	{
		res[cursor ++] = arr[l2];
	}
}
