//1. Write a C++ program to find the position of an element from a Singly Linked List [Linear Search].

#include <iostream>

using namespace std;

// Node structure for the Linked List
struct Node {
    int data;
    Node* next;
};

// Function to construct a Linked List
Node* constructLL(int arr[], int n) {
    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; i++) {
        Node* newNode = new Node();
        newNode->data = arr[i];
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

// Function to traverse and display the Linked List
void traverse(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to find the position of an element using linear search
int findPosition(Node* head, int key) {
    Node* current = head;
    int position = 1;

    while (current != nullptr) {
        if (current->data == key) {
            return position;
        }
        current = current->next;
        position++;
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {3, 6, 9, 12, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Constructing the Linked List
    Node* head = constructLL(arr, n);

    cout << "Linked List: ";
    traverse(head);

    int key;
    cout << "Enter the element to find its position: ";
    cin >> key;

    int position = findPosition(head, key);
    if (position != -1) {
        cout << "Position of element " << key << " is: " << position ;
    } else {
        cout << "Element not found in the Linked List.";
    }

    return 0;
}
