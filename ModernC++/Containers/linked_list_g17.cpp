#include <iostream>

typedef char Data;

struct Node
{
    Data data;
    Node* next;

};

void Search(Node* head, Data key)
{
    if(head->data == key)
    {
        std::cout << "Element found" << std::endl;
    }
}

void Print(Node* head)
{
    std::cout << "data " <<  head->data << "\n";
}

void Traverse(Node *head, Data key, void(*callback)(Node*))
{
    Node *current = head;
    while(current !=nullptr)
    {
        callback(current);
        current = current->next;
    }
}
                                    //output_type (*ptr_name)(parameters_types)
void Traverse(Node *head, Data key, void(*callback)(Node*,Data))
{
    Node *current = head;
    while(current !=nullptr)
    {
        callback(current, key);
        current = current->next;
    }
}

//Traverse(head, search);
int main()
{
    Node* head = new Node;
    head->data = 'A';

    head->next = new Node;
    head->next->data = 'B';

    head->next->next = new Node;
    head->next->next->data = 'C';
    head->next->next = nullptr;
    Traverse(head, 'A' ,Search);
}