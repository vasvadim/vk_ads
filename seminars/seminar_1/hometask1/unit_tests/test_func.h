template <typename T, std::size_t N>
void zerosEnd(std::array<T, N>& arr){    
    int i = int(N) - 1;
    int j = int(N) - 1;

    while (i >= 0){
        if (arr[i] == 0){
            std::swap(arr[i], arr[j]);
            --i;
            --j;
        }
        else{
            --i;
        }
    } 
}
