#include <iostream>
#include <queue>
#include <cmath>
#include <stack>

int copyTime(int N, int x, int y){
    int l = 0;
    int r = (N-1) * std::max(x,y);

    while (l + 1 < r){
        int middle = (l+r)/2;
        
        if (middle/x + middle/y < N-1){
            l = middle;
        } else{
            r = middle;
        }
    }
    return r + std::min(x,y);
}

int binarySearchSqrt(int target){
    int l = 0;
    int r = target;

    while (l<=r){
        int middle = (l+r)/2;
        
        if (std::pow(middle, 2) < target){
            l = middle + 1;
            continue;
        }
        if (std::pow(middle, 2) > target){
            r = middle - 1;
            continue;
        }
        return middle;
    }
    return r;
}

bool isPalindrome_stack(std::string& a){
    std::stack<char> stack;

    for (char& c: a){
        stack.push(c);
    }
    for (char& c: a){
        if (c != stack.top()){
            return false;
        }
        stack.pop();
    }
    return true;
}

bool isPalindrome_ptr(std::string& a){
    int l = 0;
    int r = a.size() - 1;
    
    while (l <= r){
        if (a[l] != a[r]){
            return false;
        }
        ++l;
        --r;
    }
    return true;
}

bool isSubsequnce_queue(std::string& a, std::string& b){
    std::queue<char> q;

    for (char& c: a){
        q.push(c);
    }
    
    for (char& c: b){
        if (q.front() == c){
            q.pop();
        }
    }
    
    return q.empty();
}

bool isSubsequnce_ptr(std::string& a, std::string& b){
    int p1 = 0;
    int p2 = 0;

    if (a.empty()){
        return true;
    }
    if (a.size() > b.size()){
        return false;
    }
    
    while (p2 < b.size()){
        if (a[p1] == b[p2]){
            ++p1;
        }
        if (p1 == a.size()){
            return true; 
        }
        ++p2;
    }
    return false;    
}

int main(){
    return 0;
}