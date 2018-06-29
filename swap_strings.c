#include<stdio.h>
void swap(char **, char **);
int main ()
{
	char* s1="string1";
	char* s2="string2";
	swap(&s1,&s2);
	printf("string1 = %s \nstring2 = %s\n",s1,s2);
	return 0;
}

void swap(char **s1 , char **s2)
{
	char *tmp;
	tmp =*s1;
	*s1=*s2;
	*s2=tmp;

}
