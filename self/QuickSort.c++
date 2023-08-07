#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

class QuickSort
{

    public:

        void quicksort(vector<int>& vec, int start, int end);

        int partition(vector<int>& vec, int start, int end);

};

void QuickSort::quicksort(vector<int>& vec, int start, int end){

    if(start < end){

        int pivotIndex = QuickSort::partition(vec, start, end);

        QuickSort::quicksort(vec, start, pivotIndex - 1);

        QuickSort::quicksort(vec, pivotIndex + 1, end);

    }

}

int QuickSort::partition(vector<int>& vec, int start, int end){

    int pivot = vec[end];

    int secondPointer = start - 1;

    for (int i = start; i < end; i++)
    {

        if(vec[i] < pivot){

            secondPointer++;

            swap(vec[secondPointer], vec[i]);

        }

    }

    swap(vec[secondPointer + 1], vec[end]);

    return secondPointer + 1;
    
}

int generateRandomInt(){

    return rand() % 11;

}

vector<int> generateRandomVector(){

    int size = generateRandomInt();

    vector<int> vec;

    for (int i = 0; i < size; i++){

        vec.push_back(generateRandomInt());

    }
    
    return vec;

}

void printVector(vector<int>& vec){

    for (int i = 0; i < vec.size(); i++){

        cout << vec[i] << " ";

    }

    cout << endl;
    
}

int main(){

    QuickSort quickSort;

    // Test your quicksort implementation

    for (int i = 0; i < 10; i++)
    {
        vector<int> vec = generateRandomVector();

        cout << "Unsorted array:" << endl;

        printVector(vec);

        quickSort.quicksort(vec, 0, vec.size() - 1);

        cout << "Sorted array:" << endl;

        printVector(vec);

        cout << "--------------" << endl;

    }
    

    return 0;
}

