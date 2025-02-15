#include <iostream>
class Node { 
    public:
        int value;
        Node* next;

        Node(int value) {
            this->value = value;
            next = nullptr;
        }
}; 


class LinkedList {
    private:
        Node* head;
        Node* tail;
        int length;

    public:
       
       LinkedList(int value){ //criar código do contstrutor 
           Node* newNode = new Node(value);
           head = newNode;
           tail = newNode;
           length = 1;
       }
        
        ~LinkedList() {
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
            }
        }

        void printList() {
            Node* temp = head;
            if (temp == nullptr) {
                std::cout << "empty";
            } else {
                while (temp != nullptr) {
                    std::cout << temp->value;
                    temp = temp->next;
                    if (temp != nullptr) {
                        std::cout << " -> ";
                    }
                }
            }
            std::cout << std::endl;
        }

        Node* getHead() {
            return head;
        }

        Node* getTail() {
            return tail; 
        }

        int getLength() {
            return length;
        }

};





int main (void)
{
    
}