#include <stdio.h>

void PrintNum_Int(int *num);											  //整型数据打印函数
void SelectSort_Int(int *num);											//整型数据选择排序
int CountNum(int *num);                             //数据长度计算

void main()
{
	int num[6] = {6,5,4,3,2,1};
	
	printf("number length is %d\n",CountNum(num));
	printf("have no sort\n");										//排序前
	PrintNum_Int(num);
	
	SelectSort_Int(&num[0]);
	printf("\nhad sorted.\n");										//排序后
	PrintNum_Int(num);
	
}
int CountNum(int *num)
{
	int cnt=0;
	
	while(num[cnt]!=NULL)
	{
		cnt++;	
		
	}
	
	return cnt;
	
	
}
	    
void PrintNum_Int(int *num)
	{
		int i;

		for(i=0;i<CountNum(num);i++)
		{
			printf("%d__",num[i]);	
		} 

	}      
	    
void SelectSort_Int(int *num)
	{
		int i,j,Record;
		int numsize=CountNum(num),tmp;

		for(i=0;i<numsize-1;i++)
		{
			tmp = num[i];
			for(j=i+1;j<numsize;j++)
			{
				if(num[j]<tmp)				                //若数据小于最小值
				{
				tmp = num[j];						              //更新最小值
				Record = j;											      //记下更小值出现位置
				}
			}
			num[Record] = num[i];										//覆盖最小值的位置
			num[i] = tmp;														//把最小值往前排
		}

	}
