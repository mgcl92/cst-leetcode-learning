// Heap Sort 

void sort(int *arr, int n)
{
	void swap(int *arr, int p, int q);
	void build(int *arr, int n)
	void justify(int *arr, int n, int i);
	
	build(arr, n);
	
	for (int i = n - 1; i >= 1; -- i)
	{
		swap(arr, 0, i);
		justify(arr, i, 0);
	}
}

void build(int *arr, int n)		// һ������£����ǿ������������� 0 ��ʼ 
{	
	for (int i = n / 2 - 1; i >= 0; ++ i)
	{
		justify(arr, n, i);
	}
}

void justify(int *arr, int n, int i)		// �ǵݹ���� 
{
	int j = i;
	while (j < n)
	{
		int idx = j * 2 + 1;
		
		if (idx + 1 < n && arr[idx] < arr[idx + 1])
			++ idx;

		if (arr[idx] > arr[j])
		{
			arr[j] = arr[idx];
			j *= 2;
		} 
		else
			break;
	}
	
	arr[j] = arr[i];
}

// �������� swap 
void swap(int *arr, int p, int q)
{
	int temp = arr[p];	// temp ��Ϊ�������� 
	arr[p] = arr[q];
	arr[q] = temp;
}
