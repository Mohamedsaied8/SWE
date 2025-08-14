#include <iostream>

template<class T>
struct Node
{
    Node(T data_) : data{data_}
    {}
    T data;
    Node *next;
};

//CRUD
template<class T>
class LinkedList
{
    public:
    LinkedList(Node<T>* PHead) : head{PHead}
    {}
    void Traverse()
    {
        while(head)
        {
            std::cout << "data : " << head->data << "\n";
            head =  head->next;
        }
    }

    void Insert(int data)
    {
        while(head)
        {
            std::cout << "data : " << head->data << "\n";
            head =  head->next;
        }
        Node<T>* new_node = new Node(data);
        head = new_node;
        head->next = new_node->next = nullptr;
    }
    private: 
    Node<T>* head;
};

int main()
{
    Node<int> *head = new Node(10);
    Node<int> * first_data_node =  new Node(11);
    head->next = first_data_node;
    first_data_node->next = nullptr;

    LinkedList list(head);
    list.Insert(12);
    list.Insert(13);
    list.Traverse();

    delete first_data_node;
    delete head;
}