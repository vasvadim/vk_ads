#include <iostream>
#include <array>
#include <unordered_map>
#include <algorithm>

template <typename T, size_t N>
void print(std::array<T, N>& arr){
    for (int i=0; i<N; ++i){
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

void printVectorsInVector(std::vector<std::vector<std::string>> v){
    for (std::vector<std::string> a: v){
        for (std::string s: a){
            std::cout << s << ' ';
        }
        std::cout << std::endl;
    }
}

template <size_t N>
std::vector<std::vector<std::string>> anagramGroup(std::array<std::string,N>& arr){
    std::unordered_map<std::string, int> hashMap{};
    std::unordered_map<std::string, int> hashMapOrder{};
    std::array<std::string,N> arr_sorted{};

    for (int i=0; i<N; ++i){
        std::string str_copy = arr[i];
        std::sort(str_copy.begin(), str_copy.end());

        arr_sorted[i] = str_copy;
    }

    int Index = 0;
    for (int i=0; i<N; ++i){
        if (hashMapOrder.count(arr_sorted[i]) == 0){
            hashMapOrder.insert({arr_sorted[i], Index});
            Index++;
        }
    }

    for (int i=0; i<N; ++i){
        hashMap.insert({arr[i], hashMapOrder[arr_sorted[i]]});
    }

    std::vector<std::vector<std::string>> result{};
    for (int i=0; i<Index; ++i){
        std::vector<std::string>* ptr = new std::vector<std::string>{}; 
        for (std::string s: arr){
            if (hashMap[s] == i){
            (*ptr).push_back(s);
            }
        }
        result.push_back(*ptr);
    }

    return result;
}


int main(){
    return 0;
}