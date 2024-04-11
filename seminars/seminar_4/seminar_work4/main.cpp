#include <iostream>
#include <array>
#include <unordered_map>
#include <algorithm>

template <size_t N>
void shell_sort(std::array<int, N>& arr){
    int n = static_cast<int>(size(arr));
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
    int N = static_cast<int>(size(animals));
    int M = static_cast<int>(size(food));
    
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
        hashMapB[c] = 1;
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
    
    for (int i=1; i<N; ++i){
        if (hashMap.count(arr[i]) != 0){
            std::pair<int,int> solution{i, hashMap[arr[i]]};
            return solution;
        }
        hashMap[target - arr[i]] = i;
    }
    return std::pair{-1,-1};
}

template <size_t N>
void print(std::array<int, N>& arr){
    for (int i=0; i<N; ++i){
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

int main(){
    std::cout << typeid("a").name();
}
