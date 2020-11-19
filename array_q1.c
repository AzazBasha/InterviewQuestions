#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

int main(void)
{

	int arr1[] = {1,2,4,5};
	int arr2[] = {3,4,6,7};
	int len1 = sizeof(arr1)/sizeof(arr1[0]);
	int len2 = sizeof(arr2)/sizeof(arr2[0]);
	int len3 = len1 + len2;
	int arr3[len3];
	// Making Array elements as 0	
	bzero( arr3, len3);

	int p, q, r;
	// loop until arr1 index != len1 and arr2 index != len2 and arr3 index != len3 
	for( p=0, q=0, r=0; (p<len1) && (q<len2) && r<len3 ; r++) {
		// arr1 index element is equals to arr2 index element
		if( arr1[p] == arr2[q]) {
			arr3[r] = arr1[p];
			p++;
			q++;
			continue;
		}
		// arr1 index element is less than to arr2 index element
		if( arr1[p] < arr2[q]) {
			arr3[r] = arr1[p];
			p++;
		} else {
			arr3[r] = arr2[q];
			q++;
		}
	}
	// arr1 index != len1 and arr2 index == len2
	if(p!=len2) {
		for(; r<len3 && p<len1; r++){
			arr3[r] = arr1[p];
			p++;
		}
	}
	// arr1 index == len1 and arr2 index != len2
	else{
		for(; r<len3 && q<len2; r++){
			arr3[r] = arr2[q];
			q++;
		}
	}
	/* Displaying arr3 elements */
	for(r=0; r<len3; r++)
		printf("%d\n", arr3[r]);

return 0;
}
