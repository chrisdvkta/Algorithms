#include <iostream>
#include <stack>
using namespace std;

class Queue {
private:
    stack<int> inputStack;
    stack<int> outputStack;
    stack<int> tempy; 

public:
  void enqueue(int x) {
        inputStack.push(x);
        cout << x << " enqueued successfully." << endl;
    }

int dequeue() {
    if (inputStack.empty() && outputStack.empty()) {
        cout << "Queue is empty. Cannot dequeue." << endl;
        return -1;
    }

    if (outputStack.empty()) {
        tempy  = inputStack;
        while (!inputStack.empty()) {
            outputStack.push(inputStack.top()); //123
            inputStack.pop();
        }
    }

    int dequeued = outputStack.top();//1
    outputStack.pop(); //23

    cout << dequeued << " dequeued successfully." << endl;
    return dequeued;
}

void display() {
    if (inputStack.empty() && outputStack.empty()) {
        cout << "Queue is empty." << endl;
        return;
    }

    stack<int> tempOutputStack = outputStack;
    while (!tempOutputStack.empty()) {
        cout << tempOutputStack.top() << " ";
        tempOutputStack.pop();
    }

    stack<int> tempInputStack = inputStack;
    while (!tempInputStack.empty()) {
        cout << tempInputStack.top() << " ";
        tempInputStack.pop();
    }
    cout << endl;
}

};
int main() {
    Queue q;
    int choice, value;

    while (true) {
        cout << "\nQueue Operations:" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}