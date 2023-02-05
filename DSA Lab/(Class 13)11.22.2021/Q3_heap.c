#include <stdio.h>  
   
void heapify(int a[], int n, int i)  
{  
    int largest = i; 
    int left = 2 * i + 1; 
    int right = 2 * i + 2; 
    
    if (left < n && a[left] > a[largest])  
        largest = left;  
     
    if (right < n && a[right] > a[largest])  
        largest = right;  

    if (largest != i) {  
          
        int temp = a[i];  
        a[i] = a[largest];  
        a[largest] = temp;  
          
        heapify(a, n, largest);  
    }  
}  
void heapSort(int a[], int n)  
{  
    for (int i = n / 2 - 1; i >= 0; i--)  
        heapify(a, n, i);  
    for (int i = n - 1; i >= 0; i--) {  
        int temp = a[0];  
        a[0] = a[i];  
        a[i] = temp;  
        heapify(a, i, 0);  
    }  
}  

void ascending(int arr[], int n)  
{  
    
    for (int i = 0; i < n; ++i)  
    {  
        printf("%d", arr[i]);  
        printf(" ");  
    }  
}
    void decending(int arr[], int n)  
{  
    
    for (int j = n-1; j>= 0; j--)  
    {  
        printf("%d", arr[j]);  
        printf(" ");  
    }  
          
}  
int main()  
{  
    int a[] = {10, 15, 16, 55, 99, 22, 11};  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting array elements : \n");  
    ascending(a, n);  
    heapSort(a, n);  
    printf("\nAfter sorting array elements in ascending are : \n");    
    ascending(a, n);  
    printf("\n After sorting array elements in decending are :  \n");
    decending(a,n);
    return 0;  
}  