/*5. Տրված է ամբողջ թվերի զանգված։ Գտնել երկրորդ մեծագույն էլեմենտը և տպել էկրանին։*/
#include <stdioh>
int main()
{
	int arr[]={3,7,6,5,2,4,12,54,78,9};
	int len = sizeof(arr)/4;
	int max1, max2;
	if(arr[0]>arr[1])
	{
		max1=arr[0];
		max2=arr[1];
	}
	else
	{
		max1=arr[1];
		max2=arr[0];
	}
	for(int i=2;i<len;++i)
	{
		if(arr[i]>max2)
		{
			if(arr[i]>max1)	
			{
				max2=max1;
				max1=arr[i];
			}
			else 
				max2=arr[i];
		}
	}
	printf("Second largest element of the array is %d: ", max2);
	return 0;
}
