/*4. Տրված է string (char֊երի զանգված)։ Ստուգել արդյոք այդ string֊ը պոլինդրոմ է (string֊ը համարվում է պոլինդրոմ, եթե աջից և ձախից կարդալիս ստանում ենք նույն արդյունքը) և տպել true, եթե ճիշտ է, false հակառակ դեպքում։*/
#include <stdio.h>
int main()
{
	char str[]="ADjGhhGDA";
	int max_index = sizeof(str)-2;
	int result = 0;
	for(int i=0;i<max_index/2;++i)
	{
		if(str[i]!=str[max_index-i])
		{
			result=-1;
			break;
		}
	}
	if(result==0)
		printf("True\n");
	else
		printf("False\n");
	return 0;
}
