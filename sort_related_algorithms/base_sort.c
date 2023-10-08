// Base Sort
// �����������ö�ؼ��������˼��ʵ��
// ��Ϊ MSD(Most Significant Digtal, ��λ������) �Լ� LSD(Least Significant Digtal, ��λ������)
// ����ִ���ִ�ȡ���ڲ�ͬ�ؼ��ָ��� 

#include<math.h>
void baseSort(int *arr, int n)		// �˴��� LSD ˼·ʵ���㷨 
{
	// ���б���һ������, ������Ԫ��ȷ���ؼ��ָ�����ִ���ִ�
	int max = 0;
	for (int i = 0; i < n; ++ i)
	{
		if (arr[i] > max)
		{
			max = arr[i];	
		}	
	}
	
	int len = 0;
	while (max != 0)
	{
		++ len;
		max /= 10;
	}
	
	// ����������̵ĵ���
	// �˴�����ͬ�������� V2, ��ȡ����ģ����й���
	// һ�ε������·�Ϊ�������̣��������ռ� 
	
	int cursors[10], int analogy_queue[10][n];
	
	
	for(int i = 1; i < len; ++ i)
	{
		for (int i = 0; i < 10; ++ i)		// ��������ÿ������ 
		{
			cursors[i] = -1;
		}
		
		for (int j = 0; j < n; ++ j)		// ������� 
		{
			int temp = arr[j] / (int) pow(10, i)  % 10;
			
			analogy_queue[temp][++ cursors[temp]] = arr[j];
		}
		
		for (int k = 0, j = 0; k < 10; ++k)		// �ռ����� 
		{
			while (cursors[k] >= 0)
			{
				arr[j ++] = analogy_queue[k][cursors[k]];
				-- cursors[k];
			}
		}
	}
} 
