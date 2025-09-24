#include <iostream>
using namespace std;

class Node {
public:
    string name;
    Node* next;

    Node(string n) {
        name = n;
        next = NULL;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = NULL;
    }

    void enqueue(string customerName) {
        Node* newNode = new Node(customerName);
        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "\n" << customerName << " joined the line.\n";
    }

    void dequeue() {
        if (front == NULL) {
            cout << "\nNo customers in line.\n";
            return;
        }

        Node* temp = front;
        cout << "\n" << front->name << "'s order is ready. They leave the line.\n";
        front = front->next;

        if (front == NULL) {
            rear = NULL;
        }

        delete temp;
    }

    void showQueue() {
        if (front == NULL) {
            cout << "\nThe line is empty.\n";
            return;
        }

        cout << "\nCurrent Line: ";
        Node* temp = front;
        while (temp != NULL) {
            cout << temp->name;
            if (temp->next != NULL) {
                cout << " -> ";
            }
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main() {
    Queue queue;
    int option;
    string name;

    do {
        cout << "\n--- Coffee Shop Queue Menu ---\n";
        cout << "1. New Customer Arrival (Enqueue)\n";
        cout << "2. Serve Customer (Dequeue)\n";
        cout << "3. Show Queue\n";
        cout << "4. Exit\n";
        cout << "\nChoose an option: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "\nEnter customer name (no spaces): ";
                cin >> name;  // using cin (no spaces)
                queue.enqueue(name);
                break;

            case 2:
                queue.dequeue();
                break;

            case 3:
                queue.showQueue();
                break;

            case 4:
                cout << "\nExiting the program.\n";
                break;

            default:
                cout << "\nInvalid option. Please try again.\n";
        }

    } while (option != 4);

    return 0;
}
