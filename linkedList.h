#ifndef _SET_H
#define _SET_H
#include <iostream>

template<typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
        Node(T d) : data(d), next(nullptr) {}
    };
    Node* head;
public:
    LinkedList() : head(nullptr) {}
    ~LinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    void append(T data) {
        Node* new_node = new Node(data);
        if (head == nullptr) {
            head = new_node;
        }
        else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }
    void insert(T data, int pos) {
        Node* new_node = new Node(data);
        if (pos == 0) {
            new_node->next = head;
            head = new_node;
        }
        else {
            Node* temp = head;
            for (int i = 0; i < pos-1 && temp != nullptr; i++) {
                temp = temp->next;
            }
            if (temp == nullptr) {
                std::cerr << "Error: Index out of range." << std::endl;
                delete new_node;
                return;
            }
            new_node->next = temp->next;
            temp->next = new_node;
        }
    }
    void deleteAt(int pos) {
        if (head == nullptr) {
            std::cerr << "Error: List is empty." << std::endl;
            return;
        }
        if (pos == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        else {
            Node* temp = head;
            for (int i = 0; i < pos-1 && temp != nullptr; i++) {
                temp = temp->next;
            }
            if (temp == nullptr || temp->next == nullptr) {
                std::cerr << "Error: Index out of range." << std::endl;
                return;
            }
            Node* to_delete = temp->next;
            temp->next = to_delete->next;
            delete to_delete;
        }
    }
    void print() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
    
     void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;
        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    T& operator[](int pos) {
        Node* temp = head;
        for (int i = 0; i < pos && temp != nullptr; i++) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            std::cerr << "Error: Index out of range." << std::endl;
            // Return a reference to a dummy variable in case the user tries to modify it
            static T dummy;
            return dummy;
        }
        return temp->data;
    }
    // int getLength() {
    //     return length;
    // }
    
};

#endif //_SET_H