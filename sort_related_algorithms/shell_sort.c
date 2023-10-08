// Shell Sort
/*
* 希尔算法的难题在于增量序列的选择
* 算法步骤：
* 根据当前迭代轮次的增量对 n 个数据分组, 
* 然后对每个分组执行插入排序算法的变种（变种主要体现在索引的变化以对应分组） 
* 
* 不同增量序列的生成方式不同导致分组情况也不尽相同，但是应该注意的是增量元素之间关系是既约的
* 否则，将导致大增量不起作用 
*/
void shellSort(int *arr, int n)
{	
	
	for (int increment = n / 2; increment > 0; increment /= 2) // 增量大小在本质上反应着分组的数量 
	{
		for (int gid = 0; gid < increment; ++ gid)
		{
			for (int cursor = gid + increment; cursor < n; cursor += increment)		// Insert Sort Part
			{
				int temp = arr[cursor]; 
				int idx = cursor - increment;		// 生成已有序序列的最后一个元素的索引
				
				while (idx >= 0 && arr[idx] > temp) {
					arr[idx + increment] = arr[idx];
					idx -= increment;
				}
				
				arr[idx + increment] = temp;
			}	
		} 
	}
}
