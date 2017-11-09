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
	    
void BubbleSort_Int(int *num)
	{
		int i,j;
		int numsize=CountNum(num),tmp;

		for(i=0;i<numsize-1;i++)
		{
			for(j=0;j<numsize-1-i;j++)
			{
				if(num[numsize-1-j]<num[numsize-2-j])				//若底部数据大于顶部
				{
				tmp = num[numsize-1-j];						//互换位置
				num[numsize-1-j]=num[numsize-2-j];
				num[numsize-2-j]=tmp;
				}
			}
		}

	}
