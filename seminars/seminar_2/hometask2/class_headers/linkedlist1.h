#ifndef LINKEDLIST_1
#define LINKEDLIST_1

struct Node;

class linked_list1{
private:    
    Node* head;
public:    
    linked_list1(Node* head = nullptr);
    void push_front(int n);
    void push_back(int n);
    void print();
    void insert(int after, int n);
    void reverseList();
    int middleSearch();
    Node* search(int val);
    bool hasCycle();
    void link(int val1, int val2);
    Node* getHead();
    Node* removeElement(int value);
    friend Node* merge_list(linked_list1& list1, linked_list1& list2);
};

#endif