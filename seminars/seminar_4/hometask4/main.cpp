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
std::vector<std::vector<std::string>> groupAnagrams(std::array<std::string, N>& strs) {
    std::unordered_map<std::string, int> map;
    std::vector<std::vector<std::string>> res;
    int index = 0;
    for(const std::string &word: strs){
        std::string temp = word;
        std::sort(temp.begin(), temp.end());
    if (map.count(temp) == 0){
        map[temp] = index;
        res.push_back({word});
        index++;
    }
    else{
        res[map[temp]].push_back(word);
    }
    }
    return res;
}


int main(){
    return 0;
}