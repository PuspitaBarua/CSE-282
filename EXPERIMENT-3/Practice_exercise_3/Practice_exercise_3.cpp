//3. Write a C++ program to insert a node at the beginning of a DLL. [Consider possible edge cases]

#include <iostream>

using namespace std;

// Node structure for the Doubly Linked List
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Function to construct a Doubly Linked List
Node* constructDLL(int arr[], int n) {
    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; i++) {
        Node* newNode = new Node();
        newNode->data = arr[i];
        newNode->prev = nullptr;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    return head;
}

// Function to traverse and display the Doubly Linked List
void traverse(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to insert a node at the beginning of the Doubly Linked List
Node* insertAtBeginning(Node* head, int element) {
    Node* newNode = new Node();
    newNode->data = element;
    newNode->prev = nullptr;
    newNode->next = head;

    if (head != nullptr) {
        head->prev = newNode;
    }

    return newNode;
}

int main() {
    int arr[] = {3, 6, 9, 12, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Constructing the Doubly Linked List
    Node* head = constructDLL(arr, n);

    cout << "Original Doubly Linked List: ";
    traverse(head);

    int element;
    cout << "Enter the element to insert at the beginning: ";
    cin >> element;

    // Inserting the element at the beginning of the Doubly Linked List
    head = insertAtBeginning(head, element);

    cout << "Doubly Linked List after insertion: ";
    traverse(head);

    return 0;
}

