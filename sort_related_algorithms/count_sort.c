// Count Sort
/*
 * ����������һ�����ÿռ任ʱ��������㷨 
*/ 
void pesudoConutSortV1(int *arr, int n)  	// ��ʵ���ǲ��ȶ���, ֻ�ǵ����Ķ���ֵ�ļ���, �Դ�����Ӱ�� 
{
	int counter[n] = {0};
	
	for (int i = 0; i < n; ++ i)		// ͳ����ֵΪ i ��Ԫ�ظ���, i = 1, 2, ..., n - 1, ���� arr ������ȡֵ Ϊ [0, n - 1] 
	{
		++ counter[arr[i]];
	}
	
	for (int i = 0, j = 0; i < n; ++ i)		// ������������ 
	{
		while (counter[i] > 0)
		{
			arr[j ++] = i;
		}
	}
	
}

void pesudoCountSortV2(int *arr, int n)		// ��Ҫ˼�������ö���,���ö�ά����ֱ�Ӵ��棬�ռ�Ч���� O(n^2), �˴��ݲ�ʵ�� 
{
	int cursors[n], analogy_queue[n][n] = {0};		// ��Ϊ�ڼ���������, ���漰�������⣬����ֻ��Ҫʹ�� cursors ��������Ƕ�βԪ������λ�ü��� 
	
	for (int i = 0; i < n; ++ i)		// cursors ��������Ԫ�س�ֵΪ -1
	{
		cursors[i] = -1;
	}
	
	for (int i = 0; i < n; ++ i)		// �������� 
	{
		int temp = arr[i];
		
		analogy_queue[temp][++ cursor[temp]] = i;		// temp ��ֵ�����Ԫ����������
	}
	
	for (int i = 0, j = 0; i < n; ++ i)
	{
		for (int k = 0; k <= cursors[i]; ++ k)
		{
			arr[j ++] = analogy_queue[i][cursor[k]];		// ��ʵ��ʵ������������һ�� 
		}
	}
}

void countSort(int *arr, int n)		// ��������ڼ������򲢲��ǰѼ���������±�ֱ����Ϊ��������
									// ����ͨ�������Ľ���������ÿ��Ԫ����������ɺ��λ�ã�Ȼ��Ԫ�ظ�ֵ����Ӧλ�á�
									// ����뷨���ҿ����� V2 �汾û������ 
{
}



