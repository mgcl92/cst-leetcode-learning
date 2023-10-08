// Shell Sort
/*
* ϣ���㷨�����������������е�ѡ��
* �㷨���裺
* ���ݵ�ǰ�����ִε������� n �����ݷ���, 
* Ȼ���ÿ������ִ�в��������㷨�ı��֣�������Ҫ�����������ı仯�Զ�Ӧ���飩 
* 
* ��ͬ�������е����ɷ�ʽ��ͬ���·������Ҳ������ͬ������Ӧ��ע���������Ԫ��֮���ϵ�Ǽ�Լ��
* ���򣬽����´������������� 
*/
void shellSort(int *arr, int n)
{	
	
	for (int increment = n / 2; increment > 0; increment /= 2) // ������С�ڱ����Ϸ�Ӧ�ŷ�������� 
	{
		for (int gid = 0; gid < increment; ++ gid)
		{
			for (int cursor = gid + increment; cursor < n; cursor += increment)		// Insert Sort Part
			{
				int temp = arr[cursor]; 
				int idx = cursor - increment;		// �������������е����һ��Ԫ�ص�����
				
				while (idx >= 0 && arr[idx] > temp) {
					arr[idx + increment] = arr[idx];
					idx -= increment;
				}
				
				arr[idx + increment] = temp;
			}	
		} 
	}
}
