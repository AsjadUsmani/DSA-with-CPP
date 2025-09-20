#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int> &arr, int start, int end, int mid){
    int i = start, j = mid + 1;
    int invCount = 0;
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]) i++;
        else {
            invCount += mid - i + 1;
            j++;
        }
    }
    while(i <= mid) i++;
    while(j <= end) j++;
    return invCount;
}

int mergeSort(vector<int> &arr, int start, int end){
    if(start < end){
        int mid = start + (end - start) / 2;
        int leftCount = mergeSort(arr, start, mid);
        int rightCount = mergeSort(arr, mid + 1, end);

        int invCount = merge(arr, start, end, mid);
        return leftCount + rightCount + invCount;
    }
    else return 0;
}

int main(){
    // vector<int> arr = {6, 3, 5, 2, 7};
    vector<int> arr = {1, 3, 5, 10, 2, 6, 8, 9};
    cout << "Total Inversion count: " << mergeSort(arr, 0, arr.size() - 1);
    return 0;
}