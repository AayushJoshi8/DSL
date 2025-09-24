#include <iostream>
using namespace std;

class CircularQueue {
    int front, rear, size;
    string* queue;

public:
    CircularQueue(int s) {
        size = s;
        queue = new string[size];
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return ((rear + 1) % size == front);
    }

    bool isEmpty() {
        return (front == -1);
    }

    void enqueue(string job) {
        if (isFull()) {
            cout << "Queue is full. Cannot add job: " << job << "\n";
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }

        queue[rear] = job;
        cout << "Job '" << job << "' added.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. No job to process.\n";
            return;
        }

        cout << "Processing job: " << queue[front] << "\n";

        if (front == rear) {
            front = rear = -1; // queue is now empty
        } else {
            front = (front + 1) % size;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Current Queue: ";
        int i = front;
        while (true) {
            cout << queue[i];
            if (i == rear) break;
            cout << " -> ";
            i = (i + 1) % size;
        }
        cout << "\n";
    }
};

int main() {
    int n;
    cout << "--- Printer Spooler ---\n";
    cout << "Enter queue size: ";
    cin >> n;

    CircularQueue printer(n);
    int choice;
    string job;

    do {
        cout << "\n1. Add Print Job\n";
        cout << "2. Process Print Job\n";
        cout << "3. Show Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter job name: ";
            cin >> job;
            printer.enqueue(job);
            break;

        case 2:
            printer.dequeue();
            break;

        case 3:
            printer.display();
            break;

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;  }
