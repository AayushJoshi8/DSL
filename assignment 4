#include <iostream>
using namespace std;

class Node {
public:
    string task_name;
    int priority;
    int execution;
    Node *next;

    Node(string tn, int p, int e) {
        task_name = tn;
        priority = p;
        execution = e;
        next = NULL;
    }

    void display() {
       
        cout << "Task Name: " << task_name << endl;
        cout << "Priority: " << priority << endl;
        cout << "Execution: " << execution << endl << endl;
    }
};

int main() {
    int n, p, e;
    string tn;

    Node *header = NULL;
    Node *temp = NULL;
    Node *t = NULL;
    Node *current = NULL;
    Node *previous = NULL;

    cout << "Enter the number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter the task name: ";
        cin >> tn;
        cout << "Enter your priority: ";
        cin >> p;
        cout << "Enter the execution: ";
        cin >> e;

        temp = new Node(tn, p, e);

        
        if (header == NULL || header->priority < temp->priority) {
            temp->next = header;
            header = temp;
        } else {
            previous = header;
            current = header->next;

          
            while (current != NULL && current->priority >= temp->priority) {
                previous = current;
                current = current->next;
            }
            previous->next = temp;
            temp->next = current;
        }
    }

    
    t = header;
    while (t != NULL) {
        t->display();
        t = t->next;
    }

    return 0;
}
