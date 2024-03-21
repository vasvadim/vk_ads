#ifndef LINKEDLIST_2
#define LINKEDLIST_2

struct Node;

class linked_list2{
private:    
    Node* head;
public:    
    linked_list2(Node* head = nullptr);
    void push_front(int n);
    void push_back(int n);
    void print();
    void insert(int after, int n);
    void delete_val(int value);
};

#endif
