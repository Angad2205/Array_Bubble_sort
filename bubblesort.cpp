// bubble sort 
#include<stdio.h>
int main ()
{
	int size , i ,j , k , l , flag;
	k = 1;
	l = 1;
	printf("Enter the size of array \n");
	scanf("%d" , &size);
	int array[size];
	int m = size -1;
	printf("Enter the elements of the array");
	for (i = 0 ; i<size ; i++)
	{
		scanf("%d" , &array[i]);
	}
	while (k <= size-1)
	{
		i = 0 ; 
		j = i+1;
		for ( l =1 ;l <= m ; l++)
		{
			if (array[i] > array[j])
			{
				flag = array[i];
				array[i] = array[j];
				array[j] = flag;
			}
			i++;
			j++;
		}
		k++;
		m--;
	}
	for (i = 0 ; i<size ; i++)
	{
		printf("%d \n" , array[i]);
	}
	return 0;
}
