#include <iostream>
#include <array>
#include <vector>

template <typename T, size_t N>
void reverseArray(std::array<T, N>& arr, int l = 0, int r = N - 1){
    int* p1 = &arr[l];
    int* p2 = &arr[r];

    while (p1 < p2){
        std::swap(*p1, *p2);
        ++p1;
        --p2;
    }
}

template <typename T, size_t N>
void partReverseArray(std::array<T, N>& arr, int k){
   reverseArray(arr, 0, N - 1);
   reverseArray(arr, 0, k % N - 1);
   reverseArray(arr, k % N, N - 1);
}

template <typename T, size_t N, size_t M>
std::vector<int> mergeArray_Malloc(std::array<T, N>& arr1, std::array<T, M>& arr2){
    std::vector<int> merged_array;
    int i = 0;
    int j = 0;

    while (i < arr1.size() and j < arr2.size()){
        if (arr1[i] < arr2[j]){
            merged_array.push_back(arr1[i]);
            ++i;
        } else{
            merged_array.push_back(arr2[j]);
            ++j;
        }
    }
    while (i < arr1.size()){
        merged_array.push_back(arr1[i]);
        ++i;
    }
    while (j < arr2.size()){
        merged_array.push_back(arr2[j]);
        ++j;
    }
    return merged_array;
}

template <typename T, size_t N, size_t M>
void mergeArray_noMalloc(std::array<T, N>& arr1, std::array<T, M>& arr2){
    int i = N - M - 1;
    int j = N - 1;
    int k = M - 1;

    while (k >= 0){
        if (i >= 0 and arr1[i] > arr2[k]){
            arr1[j] = arr1[i];
            i--; 
        } else {
            arr1[j] = arr2[k];
            k--;
        }
        j--;
    }  
}

template <typename T, size_t N>
void evenFirst(std::array<T, N>& arr){
    int evenIndex = 0;

    for (int i=0; i < N; i++){
        if (arr[i] % 2 == 0){
            std::swap(arr[i], arr[evenIndex]);
            ++evenIndex;
        } 
    }
}

template <typename T, size_t N>
void print(std::array<T, N>& arr){
    for (int i=0; i < N; ++i){
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int main(){
    return 0;
}