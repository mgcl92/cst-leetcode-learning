// Base Sort
// 基数排序利用多关键字排序的思想实现
// 分为 MSD(Most Significant Digtal, 高位优先序) 以及 LSD(Least Significant Digtal, 低位优先序)
// 所需执行轮次取决于不同关键字个数 

#include<math.h>
void baseSort(int *arr, int n)		// 此处以 LSD 思路实现算法 
{
	// 先行遍历一次数组, 获得最大元以确定关键字个数及执行轮次
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
	
	// 基数排序过程的迭代
	// 此处处理同计数排序 V2, 采取数组模拟队列过程
	// 一次迭代大致分为两个过程：分配与收集 
	
	int cursors[10], int analogy_queue[10][n];
	
	
	for(int i = 1; i < len; ++ i)
	{
		for (int i = 0; i < 10; ++ i)		// 该数组需每轮重置 
		{
			cursors[i] = -1;
		}
		
		for (int j = 0; j < n; ++ j)		// 分配过程 
		{
			int temp = arr[j] / (int) pow(10, i)  % 10;
			
			analogy_queue[temp][++ cursors[temp]] = arr[j];
		}
		
		for (int k = 0, j = 0; k < 10; ++k)		// 收集过程 
		{
			while (cursors[k] >= 0)
			{
				arr[j ++] = analogy_queue[k][cursors[k]];
				-- cursors[k];
			}
		}
	}
} 
