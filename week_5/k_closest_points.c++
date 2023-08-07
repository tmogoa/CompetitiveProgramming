#include <cmath>
#include <vector>
#include <cstdlib>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        vector<vector<int>> k_closest_points;

        quick_sort(points, 0, points.size() - 1);

        for(int i = 0; i < k; i++){
            k_closest_points.push_back(points[i]);
        }

        return k_closest_points;

    }
    

    void quick_sort(vector<vector<int>>& points, int start, int end){

        if(start < end){

            int pivot = partition(points, start, end);

            quick_sort(points, start, pivot - 1);

            quick_sort(points, pivot + 1, end);

        }
        
    }

    int partition(vector<vector<int>>& points, int start, int end){

        cout << start << endl;

        int pivot = end;

        int second_pointer = start - 1;

        for(int i = start; i < end; i++){

            if(squared_euclidean(points[i]) < squared_euclidean(points[pivot])){

                second_pointer++;

                swap(points[i], points[second_pointer]);

            }

        }

        swap(points[pivot], points[second_pointer + 1]);

        return second_pointer + 1;

    }

    int squared_euclidean(vector<int>& point){

        return pow(point[0], 2) + pow(point[1], 2);

    }
};