// 二者在本质上没有任何区别，包括比较次数和移动次数 
// 交換插入排序 
void isnertSortV1(int *arr, int n)
{
	
	for (int i = 1; i < n; ++ i) // i 从 1 开始而不是从 0开始, 此时默认 0 号元素已经插入 
	{
		for (int j = i; j > 0; -- j)
			if (arr[j] < arr[j - 1])
			{
				swap(arr, j - 1, j);
			}
			else 
			{
				break;	// 切记，遇到合适位置需要停止 
			}
	}
}

// 移动插入排序 
void isnertSortV2(int *arr, int n)
{ 
	for (int i = 1; i < n; ++ i) // i 从 1 开始而不是从 0开始, 此时默认 0 号元素已经插入 
		{
			int temp = arr[i], j;
			
			for (j = i - 1; j >= 0; -- j)
			{
				if (arr[j] > temp)
				{
					arr[j + 1] = arr[j];
				}
				else 
				{
					break;
				}
			}
			
			arr[j + 1] = temp; 
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
