#include <iostream>
using namespace std;

template<typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
        Node(T data) : data(data), next(nullptr) {}
    };
    Node* head;
    size_t size;

public:
    LinkedList() : head(nullptr), size(0) {}
    ~LinkedList() {
        Node* curr = head;
        while (curr != nullptr) {
            Node* next = curr->next;
            delete curr;
            curr = next;
        }
    }

    void append(T data) {
        Node* new_node = new Node(data);
        if (head == nullptr) {
            head = new_node;
        }
        else {
            Node* curr = head;
            while (curr->next != nullptr) {
                curr = curr->next;
            }
            curr->next = new_node;
        }
        size++;
    }

    void insert(T data, size_t pos) {
        if (pos > size) {
            pos = size;
        }
        Node* new_node = new Node(data);
        if (pos == 0) {
            new_node->next = head;
            head = new_node;
        }
        else {
            Node* curr = head;
            for (size_t i = 0; i < pos - 1; i++) {
                curr = curr->next;
            }
            new_node->next = curr->next;
            curr->next = new_node;
        }
        size++;
    }
    
    void remove(size_t pos) {
        if (pos >= size) {
            return;
        }
        Node* temp;
        if (pos == 0) {
            temp = head;
            head = head->next;
        }
        else {
            Node* curr = head;
            for (size_t i = 0; i < pos - 1; i++) {
                curr = curr->next;
            }
            temp = curr->next;
            curr->next = temp->next;
        }
        delete temp;
        size--;
    }

    T& operator[](size_t pos) {
        Node* curr = head;
        for (size_t i = 0; i < pos; i++) {
            curr = curr->next;
        }
        return curr->data;
    }

    void reverse() {
        Node* curr = head;
        Node* prev = nullptr;
        while (curr != nullptr) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void print() {
        Node* curr = head;
        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout <<endl;
    }
};

int main() {
    LinkedList<int> list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);
    list.print(); // Output: 1 2 3 4 5
    list.reverse();
    list.print(); // Output: 5 4 3 2 1
    list.insert(0, 0);
    list.insert(6, 6);
    list.insert(9, 3);
    list.print(); // Output: 0 5 4 9 3 2 1 6
    list.remove(2);
    list.remove(4);
}