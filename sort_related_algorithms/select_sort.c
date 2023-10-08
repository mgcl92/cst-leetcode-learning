void swap(int *, int, int);

// ѡ������ 
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


// ��Ԫѡ������ 
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

// �������� swap 
void swap(int *arr, int p, int q)
{
	int temp = arr[p];	// temp ��Ϊ�������� 
	arr[p] = arr[q];
	arr[q] = temp;
	
	// ������ ����������д�� 
//	arr[p] += arr[q];
//	arr[q] = arr[p] - arr[q];
//	arr[p] = arr[p] = arr[q]; 
}
