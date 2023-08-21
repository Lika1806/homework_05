/*2. Տրված է ամբողջ թվերի զանգված, որում բոլոր էլեմենտները կրկնվում են 2 անգամ, բացի մեկ էլեմենտից։ Գտնել այդ էլեմենտը և արտածել այն էկրանին։*/
#include <stdio.h>

void swap(int* x, int* y)
{
	int tmp=*x;
	*x=*y;
	*y=tmp;
}
void sort(int* arr,int len)
{
	for(int i=0;i<len;i++)
	{
		for(int j=i-1;j>=0;j--)
		{
			if(*(arr+j+1)<*(arr+j))
				swap(arr+j+1, arr+j);
			else
				break;
		}
	}
}
int main()
{
	int arr[]={1,1,3,2,9,2,3,4,7,8,7,8,4};
	int len = sizeof(arr)/4;
	sort(arr,len);
	int i;
	for (i=0;i<len;i+=2)
	{
		if(arr[i]!=arr[i+1])
		break; 
	}
	printf("The unique element in array is %d:\n", arr[i]);
	return 0;
}



