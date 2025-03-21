#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node(int data) {
    this->data = data;
    next = nullptr;
  }
};

class LinkedList {
public:
  Node *head;
  LinkedList() { this->head = nullptr; }

  void insertAtTail(int data) {
    Node *newNode = new Node(data);
    if (head == nullptr) {
      head = newNode;
      return;
    }
    Node *temp = head;
    while (temp->next != nullptr) {
      temp = temp->next;
    }
    temp->next = newNode;
  }

  void insertAthead(int value) {
    Node *newNode = new Node(value);
    if (head == nullptr) {
      head = newNode;
      return;
    }
    newNode->next = head;
    head = newNode;
  }
  void Addone() {
    Node *temp = head;
    while (temp) {
      temp->data = temp->data + 1;
      temp = temp->next;
    }
  }
  void removeAtTail(){
    Node *temp=head;
    while(temp->next->next){
        temp=temp->next;
    }
    temp->next=nullptr;
  }

  void insertAtPosition(int value,int position){
    if (position <= 1) {
      this->insertAthead(value);
      return;
    }
    int size=this->length();
    if (position >= size) {
      this->insertAtTail(value);
       return;
    }
    Node *newNode=new Node(value);
    int i=1;
    Node *temp=head;
    while (i < position - 1) {
      temp=temp->next;
      i++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
  }

  int length(){
    int count=0;
    Node *temp=head;
    while(temp){
      count++;
      temp=temp->next;
    }
    return count;
  }

  void PrintList() {
    Node *temp = head;
    while (temp) {
      cout << temp->data << " "
           << "->"
           << " ";
      temp = temp->next;
    }
  }
};

int main() {
  LinkedList *list = new LinkedList();
  list->insertAtTail(10);
  list->insertAtTail(20);
  list->insertAtTail(30);
  list->insertAtTail(40);
  list->insertAthead(5);
  list->insertAthead(1);
  list->PrintList();

  cout << endl;
  list->Addone();
  list->PrintList();
  list->removeAtTail();
  cout<<endl;
  list->PrintList();
  cout<<endl;

  list->insertAtPosition(100, 300);
  list->PrintList();

  cout<<endl;

  cout<<list->length()<<endl;

  return 0;
}