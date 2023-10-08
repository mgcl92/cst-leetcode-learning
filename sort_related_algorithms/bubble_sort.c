// Bubble Sort
/*
* ð������
* ����˼��: �Ƚ��뽻��
*/ 

// ��������λ�ں�������֮��, ������ú������� 
void swap(int *arr, int p, int q);

void bubleSortV1 (int *arr, int n)
{
	
	for (int i = 0; i < n - 1; ++ i) 
	{
		for (j = 0; j < n - i - 1; ++ j)
		{
			if (arr[j] > arr[j + 1])	// �ǵݼ�����
			{
				swap(arr, j, j + 1);
			}
		}	
	}	
}

/*
 * �Ľ�ð������ 
 * ˼·������һ��ð��ѭ����û�з�������ʱ����˵�������������򣬴�ʱ������һ���������۲��Ƿ���ѭ���з��������Ӷ��ﵽ��֦��Ŀ�ġ� 
*/ 
void bubbleSortV2(int *arr, int n) 
{
	for (int i = 0; i < n - 1; ++ i)
	{
		bool flag = true;
		
		for (j = 0; j < n - i - 1; ++ j)
		{
			if (arr[j] > arr[j + 1]) 
			{
				swap(arr, j, j + 1);
				flag = false;  // �������������� flag 
			}
		}
		
		if (flag)
			break;
	}
	 
}
/*
 * ��һ���Ľ�ð������
 * ˼·�� �� V2 �����ϣ�������������¼�ϴε����������������λ�ã�����ָʾ�������ڱ��ʱ��������󽻻�λ�ã� 
*/ 
void bubbleSortV3(int *arr, int n)
{
	int last = n - 1;
	
	for (int i = 0; i < n - 1; ++ i)
	{
		bool flag = true;
		int temp = last;
		
		for (j = 0; j < temp - 1; ++ j) {
			if (arr[j] > arr[j + 1])
			{
				swap(arr, j, j + 1);
				flag = false;
				last = j;
			}
		}
	}
} 

// Exercise 
// �ƶ� 0
// ��ð�����򷽷�: ˫ָ�� 
void moveZerosV1(int *nums, int n)
{	
	int i = j = cnt = 0;
	
	for ( ; i < n; ++ i)
	{
		if (nums[i] != 0)
		{
			nums[j] = nums[i];
			++ j;
		}
		else 
		{
			++ cnt;
		}
	}
	
	for (i = n - cnt; i < n; ++ i)
		nums[i] = 0;
}
// ð�����򷽷� 
void moveZerosV2(int *nums, int n)
{

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
