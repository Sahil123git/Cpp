#include <iostream> 
using namespace std; 
int main() 
{ 
	int x[5] = { 1, 2, 3, 4, 5 }; 
	// p points to array x 
	int* p = &x[0]; 
	int i; 
	// exchange values using pointer 
	for (i = 0; i < 2; i++) { 
		int temp = *(p + i); 
		*(p + i) = *(p + 4 - i); 
		*(p + 4 - i) = temp; 
	} 
	// output the array x 
	for (i = 0; i < 5; i++) 
		cout << x[i] << " "; 
	return 0; 
} 
