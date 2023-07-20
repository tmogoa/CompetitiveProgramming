vector<int> countingSort(vector<int> arr) {
    vector<int> freqArray(100, 0);
    for (int i = 0; i < arr.size(); i++) {
        freqArray[arr[i]]++;
    }
    
    return freqArray;
}