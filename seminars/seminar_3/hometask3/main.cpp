#include <iostream>
#include <stack>

std::string removeDuplicates(std::string& a){
    std::stack<char> stack;

    for (char& c: a){    
        if (stack.empty()){
            stack.push(c);
            continue;
        }
        if (stack.top() != c){
            stack.push(c);
        } else{
            stack.pop();
        }
    }
    std::string output;

    while (!stack.empty()){
        output = stack.top() + output;
        stack.pop();
    }
    return output;
}

int main(){
    return 0;
}