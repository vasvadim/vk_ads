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

    while (i < N and j < M){
        if (animals[i] <= food[j]){
            count++;
            ++i;
        }
        ++j;
    }
    return count;
}

char extraLetter(std::string const& a, std::string const& b){
    std::unordered_map<char, int> hashMapB;

    for (char c: b){
        hashMapB[c] = 1;
    }

    for (char c: a){
        hashMapB.erase(c);  
        hashMapB.insert({c, 0});
    }

    for (char c: b){
        if (hashMapB[c] == 1){
            return c;
        }
    }
    return {};
}

template <size_t N>
int twoSum(std::array<int, N>& arr){
    return 0;
}

template <size_t N>
void print(std::array<int, N>& arr){
    for (int i=0; i<N; ++i){
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

int main(){
    std::string a{""};
    std::string b{"a"};

    std::cout << extraLetter(a,b);
}
