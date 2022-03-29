#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(int array[], int size){
    int i;
    for(i=0;i<size;i++)
        cout<<array[i]<<" ";
    cout<<endl;
}

int partition(int array[], int low, int high){
    int pivot= array[high];

    int i= (low-1);

    //compare with the pivot
    for(int j=low; j<high; j++){
        if(array[j]<=pivot){
            i++;

            swap(&array[i], &array[j]);
        }
    }
    //swap pivot element
swap(&array[i+1], &array[high]);

return(i+1);
}

void quickSort(int array[], int low, int high){
    if(low<high){
        int pi = partition(array, low, high);

        quickSort(array, low, pi-1);
        quickSort(array, pi + 1, high);
    }
}

int main(){
  int n, data[100],i;
  cout<<"How many elements you want to sort?\n Enter the number:  "<<endl;
  cin >> n;

  cout<<"Enter data elements: "<<endl;
  for(i=0; i<n; i++){
     cin>>data[i];
  }
  //int n = sizeof(data) / sizeof(data[0]);
  printf("Unsorted Array:\n");
  printArray(data, n);

  // perform quicksort on data
  quickSort(data, 0, n - 1);

  printf("Sorted array in ascending order: \n");
  printArray(data, n);
}

