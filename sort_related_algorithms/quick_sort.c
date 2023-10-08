// Quick Sort
#include <stdlib.h>
void quickSort(int *arr, int l, int r)
{
	if (l >= r)
		return;
	
	int position = partition(arr, l, r);
	
	quickSort(arr, l, position - 1);
	quickSort(arr, position + 1, r);
	
}

int partition(int *arr, int l, int r) 	// ���з��㷨�����, ����һ��ѧ������ 
{
	void swap(int *arr, int p, int q);
	
	int pivot = l + rand() % r, temp = arr[pivot];
	
	swap(arr, l, pivot);
	int i = l + 1, j = r;
	
	while (i < j)		// i == j ʱ�˳�ѭ�� 
	{
		while (i < j && arr[j] > temp)
			-- j;
		while (i < j && arr[i] < temp)
			++ i;
		
		if (i < j)  //  ��������ѭ���˳���������Ψһ�ģ������п�������Ϊ i == j ���˳�������ʱ���н�������Ӱ����, Ȩ��һ�ν����Ĵ����Լ�����жϵĴ��� 
			swap(arr, i, j);
	}
	
	arr[i] = temp;		// ��׼����λ 
	
	return i;
}

void swap(int *arr, int p, int q)
{
	int temp = arr[p];	// temp ��Ϊ�������� 
	arr[p] = arr[q];
	arr[q] = temp;
}
