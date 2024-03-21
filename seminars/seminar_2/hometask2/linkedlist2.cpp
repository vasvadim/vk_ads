#include <iostream>
#include <string>
#include "class_headers/linkedlist2.h"

struct Node{
    int data{};
    Node* next{nullptr};
    Node* prev{nullptr};
};

linked_list2::linked_list2(Node* head)
            : head{head}
{
}

void linked_list2::push_front(int n){
    Node* node = new Node;
    node->data = n;
    node->next = nullptr;
    node->prev = nullptr;

    if(head == nullptr){
        head = node;
    } else{
        head->prev = node;
        node->next = head;
        head = node;
    }
}

void linked_list2::push_back(int n){
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
        node->prev = p;
    }
}

void linked_list2::print(){
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

void linked_list2::insert(int after, int n){
    Node* node = new Node;
    node->data = n;
    node->next = nullptr;
    node->prev = nullptr;

    Node* search = head;
    while (search != nullptr){
        if (search->data == after){
            node->next = search->next;
            node->prev = search;
            search->next = node;
            break;
        } 
        search = search->next;
    }
} 

void linked_list2::delete_val(int value){
    Node* search = head;
    while (search != nullptr){
        if (search->data == value){
            search->prev->next = search->next;
            search->next->prev = search->prev;
            break;
        }
        search = search->next;
    }
}