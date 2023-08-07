#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

void printVector(vector<int>& vec){

    cout << "[";

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    cout << "]";

    cout << endl;
    
}

class QuickSort {
    public:

        void quick_sort(vector<int>& vec, int start, int end);

        int partition(vector<int>& vec, int start, int end);

};

void QuickSort::quick_sort(vector<int>& vec, int start, int end){

    if(start < end){

        int pivot = QuickSort::partition(vec, start, end);

        QuickSort::quick_sort(vec, start, pivot - 1);

        QuickSort::quick_sort(vec, pivot + 1, end);

    }

}

int QuickSort::partition(vector<int>& vec, int start, int end){

    int pivot = end;

    int secondPointer = start - 1;

    for (int i = start; i < pivot; i++){
        
        if(vec[i] < vec[pivot]){

            secondPointer++;

            swap(vec[i], vec[secondPointer]);

            // printVector(vec);

        }

    }

    swap(vec[secondPointer + 1], vec[pivot]);

    return secondPointer + 1;
    
}

int generateInt(int upper_bound){

    return rand() % upper_bound;

}

vector<int> generateVector(int sizeUpperBound, int elemUpperBound){

    vector<int> vec;

    int size = generateInt(sizeUpperBound);

    for (int i = 0; i < size; i++){
        
        vec.push_back(generateInt(elemUpperBound));

    }
    
    return vec;

}

void printLine(){

    for (int i = 0; i < 15; i++)
    {
        cout << "-";
    }

    cout << endl;
    
}

bool vectorsEqual(vector<int>& a, vector<int>& b){

    for (int i = 0; i < a.size(); i++){

        if(a[i] != b[i]) return false;

    }

    return true;
    
}

int main(){

    QuickSort q_sort;

    while (true)
    {
        vector<int> vec = generateVector(100, 1000);

        vector<int> control_vec(vec);

        vector<int> lab_vec(vec);

        sort(control_vec.begin(), control_vec.end());

        q_sort.quick_sort(lab_vec, 0, lab_vec.size() - 1);

        if(!vectorsEqual){

            cout << endl << "!!! Vector not correctly sorted" << endl;

            cout << "Unsorted:" << endl;

            printVector(vec);

            cout << "Correct sort:" << endl;

            printVector(control_vec);

            cout << "Wrong sort:" << endl;

            printVector(lab_vec);

            return 0;

        }
        
        cout << "Sorted: ok " << endl;

        printLine();

    }
    

    return 0;
}

