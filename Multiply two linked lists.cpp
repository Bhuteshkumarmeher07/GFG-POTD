#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

    const int mod = 1e9 + 7;

    // Function to convert linked list to number
    long long convertLLtoNum(Node* head) {
        long long number = 0;
        while (head) {
            number = ((number * 10) % mod + head->data) % mod;
            head = head->next;
        }
        return number;
    }

    // Function to multiply two linked lists
    long long multiplyTwoLists(Node* first, Node* second) {
        long long number1 = convertLLtoNum(first);
        long long number2 = convertLLtoNum(second);
        
        return (number1 * number2) % mod;
    }

// Function to display the linked list
void printLL(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create two linked lists
    Node* list1 = new Node(3);
    list1->next = new Node(2);

    Node* list2 = new Node(2);

    // Display the linked lists
    cout << "List 1: ";
    printLL(list1);
    cout << "List 2: ";
    printLL(list2);

    // Print the result
    cout << "Product of the two linked lists: " << multiplyTwoLists(list1, list2) << endl;

    return 0;
}
