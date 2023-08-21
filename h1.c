/*1․ Տրված է ամբողջ թվերի զանգված։ Գտնել զանգվածի էլեմենտի ինդեքսը, ըստ արժեքի և արտածել այն էկրանին։*/
#include <stdio.h>
int main()
{
	int arr[]={2,35,7,5,8,95,32,4,6};
	int len;
	len = sizeof(arr)/4;
	int target;
	printf("input target number: ");
	scanf("%d", &target);
	int i=0;
	while(i<len)
	{
		if(arr[i]==target)
			break;
		i++;
	}
	if(i<len)
		printf("index of number %d in the array is %d", target, i);
	else
		printf("Couldn't find that number: ");
	return 0;
}


