void swap(int *, int, int);

// 选择排序 
void selectSortV1(int *arr, int n)
{
	int idx;
	for (int i = 0; i < n - 1; ++ i) 
	{
		idx = 0;
		for (int j = 1; j < n - i; ++ j)
		{
			if (arr[idx] > arr[j])
			{
				idx = j;
			}
		}
		
		swap(arr, idx, n - i - 1);
	}
}


// 二元选择排序 
void selectSortV2(int *arr, int n)
{
	int min, max; 
	for (int i = 0, j = n - 1; i < j; ++ i, --j)
	{
		for (int k = i; k < j; ++ k)
		{
			if (arr[min] > arr[k])
			{
				min = i;
			}
		
			if (arr[max] < arr[k])
			{
				max = i;
			}
		}
		
		swap(arr, min, i);
		swap(arr, max, j);
	}
}

// 交换函数 swap 
void swap(int *arr, int p, int q)
{
	int temp = arr[p];	// temp 作为辅助变量 
	arr[p] = arr[q];
	arr[q] = temp;
	
	// 非引入 辅助变量的写法 
//	arr[p] += arr[q];
//	arr[q] = arr[p] - arr[q];
//	arr[p] = arr[p] = arr[q]; 
}
