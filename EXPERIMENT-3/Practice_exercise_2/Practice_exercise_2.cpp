//2. Write a C++ program to insert an element at kth position in a singly linked list. [Consider possible edge cases]

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

// Function to insert an element at k-th position in the Linked List
Node* insertAtKthPosition(Node* head, int k, int element) {
    if (k < 1) {
        cout << "Invalid position." << endl;
        return head;
    }

    Node* newNode = new Node();
    newNode->data = element;
    newNode->next = nullptr;

    if (k == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        int count = 1;
        while (count < k - 1 && current != nullptr) {
            current = current->next;
            count++;
        }

        if (current == nullptr) {
            cout << "Position out of range." << endl;
            delete newNode;
            return head;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    return head;
}

int main() {
    int arr[] = {3, 6, 9, 12, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Constructing the Linked List
    Node* head = constructLL(arr, n);

    cout << "Original Linked List: ";
    traverse(head);

    int k, element;
    cout << "Enter the position to insert: ";
    cin >> k;
    cout << "Enter the element to insert: ";
    cin >> element;

    // Inserting the element at k-th position
    head = insertAtKthPosition(head, k, element);

    cout << "Linked List after insertion: ";
    traverse(head);
    return 0;
}

