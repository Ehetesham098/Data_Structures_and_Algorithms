#include<bits/stdc++.h>

using namespace std;
#define MAX 1000

void heapify1(int arr[], int n, int i) 
{ 

    int l = 2*i+1;
	int r = 2*i+2;
	
	int largest=i;

    if (l < n && arr[l] > arr[largest]) // If left child is larger than root 
        largest = l; 

    if (r < n && arr[r] > arr[largest]) // If right child is larger than largest so far 
        largest = r; 

    if (largest != i) {   // If largest is not root 
        swap(arr[i], arr[largest]); 

        heapify1(arr, n, (i-1)/2);   // Recursively heapify the affected sub-tree 
		//(i-1)/2 for insertion;
		//largest for deletion;
    } 
} 

void heapify2(int arr[], int n, int i) 
{ 

    int l = 2*i+1;
	int r = 2*i+2;
	
	int largest=i;

    if (l < n && arr[l] > arr[largest]) // If left child is larger than root 
        largest = l; 

    if (r < n && arr[r] > arr[largest]) // If right child is larger than largest so far 
        largest = r; 

    if (largest != i) {   // If largest is not root 
        swap(arr[i], arr[largest]); 

        heapify2(arr, n, largest);   // Recursively heapify the affected sub-tree 

    } 
} 


int deleteRoot(int arr[], int& n) 
{ 
	int root = arr[0];
    int lastElement = arr[n - 1]; 
  
    arr[0] = lastElement; 
    n = n - 1; 

    heapify2(arr, n, 0); 
    
    return root;
} 

void insertNode(int arr[], int& n, int Key) 
{ 
 	arr[n] = Key; 
    n = n+1; 
    heapify1(arr, n, (n/2 - 1)); 
} 
  
  

void printArray(int arr[], int n) 
{ 
    for (int i = 0; i < n; ++i) 
        cout << arr[i] << " "; 
  
    cout << "\n"; 
} 
  

int main() 
{ 
    
    int arr[MAX] = { 10, 5, 3, 2, 4 , 1, 0 }; 
  
    int n = 7;
  
    insertNode(arr, n, 15); 
    printArray(arr, n);
    insertNode(arr, n, 7);
    printArray(arr, n);
    
  	cout<<deleteRoot(arr,n)<<endl;
  	printArray(arr, n);
  	cout<<deleteRoot(arr,n)<<endl;
  	
  	
    printArray(arr, n); 

    return 0; 
} 
