// �����ڱ�����û���κ����𣬰����Ƚϴ������ƶ����� 
// ���Q�������� 
void isnertSortV1(int *arr, int n)
{
	
	for (int i = 1; i < n; ++ i) // i �� 1 ��ʼ�����Ǵ� 0��ʼ, ��ʱĬ�� 0 ��Ԫ���Ѿ����� 
	{
		for (int j = i; j > 0; -- j)
			if (arr[j] < arr[j - 1])
			{
				swap(arr, j - 1, j);
			}
			else 
			{
				break;	// �мǣ���������λ����Ҫֹͣ 
			}
	}
}

// �ƶ��������� 
void isnertSortV2(int *arr, int n)
{ 
	for (int i = 1; i < n; ++ i) // i �� 1 ��ʼ�����Ǵ� 0��ʼ, ��ʱĬ�� 0 ��Ԫ���Ѿ����� 
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
