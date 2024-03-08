#include <iostream>
#include <array>

template <typename T, std::size_t N>
void zerosEnd(std::array<T, N>& arr){
    int* p1 = &arr[N - 1];
    int* p2 = &arr[N - 1];

    for (int i = 0; i < N; ++i){
        if (*p1 == 0){
            std::swap(*p1, *p2);
            --p1;
            --p2;
        }
        else{
            --p1;
        }
    }    
}

template <typename T, std::size_t N>
void print(std::array<T, N>& arr){  
    int* p = &arr[0];
 
    while (p <= &arr[N - 1]){
        std::cout << *p << ' '; 
        p++;
    }
}

int main(){
    std::array<int, 20> marks{0,0,0,2,4,0,0,5,3,0,0,1,1,0,0,3,3,3,0,0};

    zerosEnd(marks);
    print(marks);
}