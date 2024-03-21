#include <iostream>
#include <string>
#include "class_headers/linkedlist1.h"

struct Node{
    int data{};
    Node* next{nullptr};
};

Node* merge_list(linked_list1& list1, linked_list1& list2){
    if (list1.head == nullptr){
        return list2.head;
    }

    if (list2.head == nullptr){
        return list1.head;
    }

    Node* ptr = list1.head;
    if (list1.head->data > list2.head->data){
        ptr = list2.head;
        list2.head = list2.head->next;
    } else{
     list1.head = list1.head->next;
    }
    
    Node* curr = ptr;
    
    while (list1.head != nullptr and list2.head != nullptr){
        if (list1.head->data < list2.head->data){
            curr->next = list1.head;
         list1.head = list1.head->next;
        } else{
            curr->next = list2.head;
            list2.head = list2.head->next;
        }
        
        curr = curr->next;    
    }
    
    if (list1.head != nullptr){
        curr->next = list1.head;
    } else{
        curr->next = list2.head;
    }   
    
    return ptr;
}

linked_list1::linked_list1(Node* head)
            : head{head}
{
}

int linked_list1::middleSearch(){
    Node* fast_p = head;
    Node* slow_p = head;

    while (fast_p != nullptr and fast_p->next != nullptr){
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
    }

    return slow_p->data;
}

void linked_list1::reverseList(){
    Node* curr = head;
    Node* prev = nullptr;

    while (curr != nullptr){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
}

void linked_list1::push_front(int n){
    Node* node = new Node;
    node->data = n;
    node->next = nullptr;

    if(head == nullptr){
        head = node;
    } else{
        node->next = head;
        head = node;
    }
}

void linked_list1::push_back(int n){
    Node* node = new Node;
    node->data = n;
    node->next = nullptr;

    Node* p = head;
    if(head == nullptr){
        head = node;
    } else{
        while (p->next != nullptr){
            p = p->next;
        }
        p->next = node;
    }
}

void linked_list1::print(){
    Node* p = head;
    std::string output = "";

    while (p != nullptr){
        output += std::to_string(p->data);
        if (p->next != nullptr){
            output += "->";
        }

        p = p->next; 
    }
    std::cout << output << std::endl;
}

void linked_list1::insert(int after, int n){
    Node* node = new Node;
    node->data = n;
    node->next = nullptr;
    
    Node* search = head;
    while (search != nullptr){
        if (search->data == after){
            node->next = search->next;
            search->next = node;
            break;
        }
        search = search->next;
    }
}

Node* linked_list1::search(int val){
    Node* search = head;
    
    while (search != nullptr){
        if (search->data == val){
            return search;
        }
        search = search->next;
    }

    return nullptr;
}

void linked_list1::link(int val1, int val2){
    Node* p1 = search(val1);
    Node* p2 = search(val2);

    p1->next = p2; 
}

bool linked_list1::hasCycle(){
    if (head == nullptr or head->next == nullptr){
        return false;
    }

    Node* slow_p = head;
    Node* fast_p = head->next;

    while (slow_p != fast_p){
        if (fast_p == nullptr or fast_p->next == nullptr){
            return false;
        }
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
    }

    return true;
}

Node* linked_list1::removeElement(int value){
    Node* dummy = new Node;
    dummy->next = head;
    Node* prev = dummy;
    Node* cur = head;

    while (cur != nullptr){
        if (cur->data == value){
            prev->next = cur->next;
        } else{
            prev = cur;
        }
        cur = cur->next;
    }
    head = dummy->next;
    return dummy->next;
}

Node* linked_list1::getHead(){
    return head;
}
