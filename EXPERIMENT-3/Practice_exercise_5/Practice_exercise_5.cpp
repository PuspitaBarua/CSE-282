//5. Write a C++ program to delete the first node of a DLL. [Consider possible edge cases]

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

// Function to delete the first node of the Doubly Linked List
Node* deleteFirstNode(Node* head) {
    if (head == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return nullptr;
    }

    Node* newHead = head->next;
    delete head;

    if (newHead != nullptr) {
        newHead->prev = nullptr;
    }

    return newHead;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Constructing the Doubly Linked List
    Node* head = constructDLL(arr, n);

    cout << "Original Doubly Linked List: ";
    traverse(head);

    // Deleting the first node of the Doubly Linked List
    head = deleteFirstNode(head);

    cout << "Doubly Linked List after deleting first node: ";
    traverse(head);

    return 0;
}
