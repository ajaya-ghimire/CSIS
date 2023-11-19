#include <iostream>
using namespace std;

template<typename T>
class LinkedList
{
private:
    struct Node
    {
        T data;
        Node* next;
    };
    Node* head;
    int size;
public:
    LinkedList()
    {
        head = nullptr;
        size = 0;
    }
    
    ~LinkedList()
    {
        Node* current = head;
        while(current != nullptr)
        {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
    
    void append(const T& data)
    {
        Node* new_node = new Node();
        new_node->data = data;
        new_node->next = nullptr;
        
        if(head == nullptr)
        {
            head = new_node;
        }
        else
        {
            Node* current = head;
            while(current->next != nullptr)
            {
                current = current->next;
            }
            current->next = new_node;
        }
        size++;
    }
    
    void insert(int pos, const T& data)
    {
        if(pos <= 0)
        {
            Node* new_node = new Node();
            new_node->data = data;
            new_node->next = head;
            head = new_node;
            size++;
        }
        else if(pos >= size)
        {
            append(data);
        }
        else
        {
            Node* new_node = new Node();
            new_node->data = data;
            
            Node* current = head;
            for(int i = 0; i < pos - 1; i++)
            {
                current = current->next;
            }
            
            new_node->next = current->next;
            current->next = new_node;
            size++;
        }
    }
    
    void remove(int pos)
    {
        if(pos < 0 || pos >= size)
        {
            return;
        }
        if(pos == 0)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
            size--;
        }
        else
        {
            Node* current = head;
            for(int i = 0; i < pos - 1; i++)
            {
                current = current->next;
            }
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
            size--;
        }
    }
    
    void reverse()
    {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;
        
        while(current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    
    void print()
    {
        Node* current = head;
        while(current != nullptr)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        cout << std::endl;
    }
    
    T& operator[](int pos)
    {
        Node* current = head;
        for(int i = 0; i < pos; i++)
        {
            current = current->next;
        }
        return current->data;
    }
};


int main()
{
    cout<<endl;
    int del_pos = 0;
    int insert_pos = 5;

    LinkedList<int> list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);
    
    cout << "Original list: "<<endl;
    list.print();

    cout<< "List after reversing: "<<endl;
    list.reverse();
    list.print();

    cout<<"List after insert: "<<endl;
    list.insert(del_pos,6 );
    list.print();

    cout<<"List after deletion: "<<endl;
    list.remove(del_pos);
    list.print();
    
    list.insert(0, 0);
}
    
