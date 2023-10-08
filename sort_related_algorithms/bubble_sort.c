// Bubble Sort
/*
* 冒泡排序
* 基本思想: 比较与交换
*/ 

// 函数定义位于函数引用之后, 需对引用函数声明 
void swap(int *arr, int p, int q);

void bubleSortV1 (int *arr, int n)
{
	
	for (int i = 0; i < n - 1; ++ i) 
	{
		for (j = 0; j < n - i - 1; ++ j)
		{
			if (arr[j] > arr[j + 1])	// 非递减排序
			{
				swap(arr, j, j + 1);
			}
		}	
	}	
}

/*
 * 改进冒泡排序 
 * 思路：当在一次冒泡循环中没有发生交换时，则说明该序列已有序，此时可设置一个变量来观察是否在循环中发生交换从而达到剪枝的目的。 
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
				flag = false;  // 发生交换，更新 flag 
			}
		}
		
		if (flag)
			break;
	}
	 
}
/*
 * 进一步改进冒泡排序
 * 思路： 在 V2 基础上，引入额外变量记录上次迭代中最后发生交换的位置（当该指示变量不在变更时，便是最后交换位置） 
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
// 移动 0
// 非冒泡排序方法: 双指针 
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
// 冒泡排序方法 
void moveZerosV2(int *nums, int n)
{

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
