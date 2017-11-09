#include <stdio.h>

void PrintNum_Int(int *num);												//整型数据显示函数
void BubbleSort_Int(int *num);											//整型数据冒泡排序

void main()
{
	int num[] = {6,5,4,3,2,1};
	
	printf("have no sort\n");													//排序前
	PrintNum_Int(num);
	
	BubbleSort_Int(&num[0]);
	printf("\nhad sorted.\n");												//排序后
	PrintNum_Int(num);
	
}
	    
void PrintNum_Int(int *num)
		{
			int i;

			for(i=0;i<(sizof(num);i++)
			{
				printf("%d__",num[i]);	
			} 

		}      
	    
void BubbleSort_Int(int *num)
			{
				int i,j;
				int numsize=sizeof(num),tmp;
				
				for(i=0;i<numsize-1;i++)
				{
					for(j=0;j<numsize-1-i;j++)
					{
						if(num[numsize-1-j]<num[numsize-2-j])				//若底部数据大于顶部
					
					}
				}
			
			}
	    
