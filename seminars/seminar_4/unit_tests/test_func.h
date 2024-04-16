#include <iostream>
#include <array>
#include <unordered_map>
#include <algorithm>

template <size_t N>
void shell_sort(std::array<int, N>& arr){
    int n = static_cast<int>(arr.size());
    int gap = n / 2;

    while (gap > 0){
        for (int current_position = gap; current_position < n; current_position++){
            int m_gap = current_position;

            while (m_gap >= gap and arr[m_gap] < arr[m_gap-gap]){
                std::swap(arr[m_gap], arr[m_gap-gap]);
                m_gap = m_gap - gap;
            }
        }
        gap = gap / 2;
    }
} 

template <size_t K, size_t T>
int feedAnimals(std::array<int, K>& animals,std::array<int, T>& food){
    int N = static_cast<int>(animals.size());
    int M = static_cast<int>(food.size());
    
    if (N == 0 or M == 0){
        return 0;
    }

    std::sort(animals.begin(), animals.end());
    std::sort(food.begin(), food.end());

    int count = 0;
    int i = 0;
    int j = 0;

    for (int a: food){
        if (a >= animals[count]){
            count++;
        }

        if (count == N){
            break;
        }
    }
    return count;
}

char extraLetter(std::string const& a, std::string const& b){
    std::unordered_map<char, int> hashMapB{};

    for (char c: b){
        if (hashMapB.count(c) != 0){
            hashMapB[c]++;
        } else{   
            hashMapB[c] = 1;
        }
    }

    for (char c: a){
        hashMapB[c]--;
    }

    for (char c: b){
        if (hashMapB[c] == 1){
            return c;
        }
    }
    return {};
}

template <size_t N>
std::pair<int,int> twoSum(std::array<int, N>& arr, int target){
    std::unordered_map<int,int> hashMap{};
    
    for (int i=0; i<N; ++i){
        if (hashMap.count(arr[i]) != 0){
            std::pair<int,int> solution{hashMap[arr[i]], i};
            return solution;
        }
        hashMap[target - arr[i]] = i;
    }
    return std::pair<int,int>{-1,-1};
}

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