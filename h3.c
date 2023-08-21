/*3. Տրված է երկու ամբողջ թվերի զանգվածներ։ Ստեղծել նոր զանգված, որը կլինի այդ զանգվածների կոնկատենացիան (կլինի այդ երկու զանգվածների պարունակությունը) և արտածել այդ զանգվածի պարունակությունը էկրանին։*/
#include <stdio.h>
int main()
{
	int arr1[]={3,4,2}, arr2[]={3,5,6,8,9};
	int len1 = sizeof(arr1)/4;
	int len2 = sizeof(arr2)/4;
	int new_len=len1+len2;
	int newarr[100];
	int i2=len1;
	int i1;
	for(i1=0; i1<len1;i1++)
	{
		newarr[i1]=arr1[i1];
		newarr[i2++]=arr2[i1];
	}
	if(len2>len1)
		for(int i=i1;i<len1+len2;i++)
			newarr[i2++]=arr2[i];
	for(int i=0;i<new_len;i++)
		printf("%d ", newarr[i]);
	printf("\n");
	return 0;
}
