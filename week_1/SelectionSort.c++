class Solution
{
    public:
    int select(int arr[], int i, int n)
    {
        int least = i;
        int j = i + 1;
        
        for(;j < n; j++){
            if(arr[j] < arr[least]) least = j;
        }
        
        return least;
    }
     
    void selectionSort(int arr[], int n)
    {
      for(int i = 0; i < n; i++){
          int j = select(arr, i, n);
          int firstElem = arr[i];
          arr[i] = arr[j];
          arr[j] = firstElem;
      }
    }
    
    void printArray(int arr[], int size)
    {
        int i;
        for (i=0; i < size; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
};