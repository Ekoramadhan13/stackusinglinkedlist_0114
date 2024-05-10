#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        next = NULL;
    }
};

class stack {
private:
    Node* top;

public:
    stack() {
        top = NULL;
    }

    int push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "push value: " << value << endl;
        return value;
    }

    void pop() {
        if (isEmpty()) {
            cout << "stack is empty." << endl;
        }
        cout << "popped value: " << top->data << endl;
        top = top->next;
    }

    void peek() {
        if (top == NULL) {
            cout << "list is empty." << endl;
        }
        else {
            Node* current = top;
            while (current != NULL) {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }

    bool isEmpty() {
        return top == NULL;
    }

};

int main()
{
    stack satck;
    int choice = 0;
    int value;

    while (choice != 5) {
        cout << "1. push\n";
        cout << "2. pop\n";
        cout << "3. peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        }
    }
}
