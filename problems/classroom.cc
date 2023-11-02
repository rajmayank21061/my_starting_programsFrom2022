// 1. Program to add two integers using pointers:
#include <stdio.h>
int main() {
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1, *ptr2 = &num2;

    int sum = *ptr1 + *ptr2;
    printf("Sum: %d\n", sum);
   return 0;
}
// 2. Program to multiplication two integers using pointers:
#include <stdio.h>
int main() {
    int num1 = 6, num2 = 4;
    int *ptr1 = &num1, *ptr2 = &num2;

    int mul = (*ptr1) * (*ptr2);
    printf("Sum: %d\n", mul);
   return 0;
}
// 3. Program to find the sum of elements in an array using pointer arithmetic:
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int *ptr = arr;

    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }
 printf("Sum of array elements: %d\n", sum);
   return 0;
}
// 4. Program to swap two numbers using pointers:
#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int num1 = 5, num2 = 10;
    int *ptr1 = &num1, *ptr2 = &num2;
printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap(ptr1, ptr2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
 return 0;
}
//5. Program to comparison three integer numbers:
#include <stdio.h>
int main()
{
	int num1 = 5, num2 = 6, num3 = 5; 
	int* p1= &num1; 
	int* p2 = &num2;
	int* p3 = &num3;
	// comparing the pointer variables.
	if (*p1 < *p2) {
		printf("\n%d less than %d", *p1, *p2);
	}
	if (*p2 > *p1) {
		printf("\n%d greater than %d", *p2, *p1);
	}
	if (*p3 == *p1) {
		printf("\nBoth the values are equal");
	}
	if (*p3 != *p2) {
		printf("\nBoth the values are not equal");
	}

	return 0;
}