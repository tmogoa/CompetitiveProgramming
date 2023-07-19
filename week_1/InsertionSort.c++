#include <bits/stdc++.h>

using namespace std;

void printArray(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort1(int n, vector<int> arr) {
    int lastElem = arr[n - 1];

    for(int i = n - 1; i > 0; i--){
        if(arr[i - 1] < lastElem){
            arr[i] = lastElem;
            printArray(arr);
            break;
        }
        else{
            arr[i] = arr[i -1];
            printArray(arr);
            if(i == 1){
                arr[0] = lastElem;
                printArray(arr);
            }
        }
    }
}