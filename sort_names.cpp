#include<iostream>
#include<string>
#include<stdlib.h>



static int myCompare (const void * a, const void * b)
{
    return strcmp (*(const char **) a, *(const char **) b);
}
 
void sort(const char *arr[], int n)
{
    qsort (arr, n, sizeof (const char *), myCompare);
}
static int myCompare (const void * a, const void * b)
{
    return strcmp (*(const char **) a, *(const char **) b);
}
 
void sort(const char *arr[], int n)
{
    qsort (arr, n, sizeof (const char *), myCompare);
}

void sort_names(char** names[])
{

}


int main()
{
	char* names[]= {"aasdd","absdsd","basbda"};
//	sort_names(&names);
	return 0;
}
