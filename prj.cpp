#include <iostream>
using namespace std;

template <typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
        Node(T data) : data(data), next(nullptr) {}
    };
    Node* head;
    int size;
public:
    LinkedList() : head(nullptr), size(0) {}
    
    void append(T data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* curr = head;
            while (curr->next != nullptr) {
                curr = curr->next;
            }
            curr->next = newNode;
        }
        size++;
    }

    void insert(T data, int pos) {
        if (pos < 0 || pos > size) {
            return;
        }
        Node* newNode = new Node(data);
        if (pos == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* prev = head;
            for (int i = 0; i < pos - 1; i++) {
                prev = prev->next;
            }
            newNode->next = prev->next;
            prev->next = newNode;
        }
        size++;
    }
    
    void remove(int pos) {
        if (pos < 0 || pos >= size) {
            return;
        }
        Node* curr = head;
        if (pos == 0) {
            head = curr->next;
        } else {
            Node* prev = head;
            for (int i = 0; i < pos - 1; i++) {
                prev = prev->next;
            }
            curr = prev->next;
            prev->next = curr->next;
        }
        delete curr;
        size--;
    }
    
    //Overloading
    T& operator[](int pos) {
        Node* curr = head;
        for (int i = 0; i < pos; i++) {
            curr = curr->next;
        }
        return curr->data;
    }

    void reverse() {
        Node *prev = nullptr, *curr = head, *next = nullptr;
        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void print() {
        Node* curr = head;
        while (curr != nullptr) {
            std::cout << curr->data << " ";
            curr = curr->next;
        }
        std::cout << std::endl;
    }

    ~LinkedList() {
        Node* curr = head;
        while (curr != nullptr) {
            Node* next = curr->next;
            delete curr;
            curr = next;
        }
    }
};



int main() {
    cout<<endl;
    cout<<"Project 1"<<endl;
    LinkedList<int> list;

    list.append(1);
    list.append(2);
    list.append(3);

    cout<<"Original list: "<<endl;
    list.print(); 

    list.insert (0,0);
    list.insert(4, 4);
    cout<<"After insertion: "<<endl;
    list.print(); 

    list.remove(2);
    list.remove(4);
    cout<<"After removal: "<<endl;
    list.print(); 

    list.reverse();
    cout<<"After reverse: "<<endl;
    list.print(); 

    cout<<endl;
    return 0;
}
