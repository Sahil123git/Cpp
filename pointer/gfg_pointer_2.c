#include <stdio.h> 
  
int main() 
{ 
    int arri[] = { 1, 2, 3 }; 
    int* ptri = &arri[0]; 
  
    char arrc[] = { 1, 2, 3 }; 
    char* ptrc = &arrc[0]; 
  
    printf("sizeof arri[] = %d ", sizeof(arri)); 
    printf("sizeof ptri = %d ", sizeof(ptri)); 
  
    printf("sizeof arrc[] = %d ", sizeof(arrc)); 
    printf("sizeof ptrc = %d ", sizeof(ptrc)); 
  
    return 0; 
} 