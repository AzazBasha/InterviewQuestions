/* Print largest three elenents in given array */

#include<stdio.h>
int main()
{
	int arr[] = {1,3,5,2,4,7,6,8,9};
	int len = sizeof(arr)/sizeof(arr[0]);

	int i;
	int largest, second_largest, third_largest;

	largest = second_largest = third_largest = arr[0];
	for(i=1; i<len; i++)
	{
		if( arr[i] > third_largest &&  third_largest < second_largest)
		{
			third_largest = arr[i];
		}
		if( arr[i] > second_largest && second_largest < largest)
		{
			third_largest = second_largest;
			second_largest = arr[i];
		}
		if( arr[i] > largest )
		{
			second_largest = largest;
			largest = arr[i];
 		}
	}

	printf("%d %d %d\n", largest, second_largest, third_largest); 

return 0;
}
