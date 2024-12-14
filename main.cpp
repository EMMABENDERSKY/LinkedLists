#include "Node.h"
#include <iostream>
#include <cstring>

using namespace std;

//function prototypes
void add(Node*& head, Student* newStudent); //function to add a student to the linked list
void print(Node* next); //function to print the students in the linked list

int main()
{
  Node* head = NULL; //initialize the head of the linked list to NULL

  char* name = new char[80];
  int ID;
  double GPA;

  //get input for the first student
  cout << "Enter Name: " << endl;
  cin.get(name, 80);
  cin.get();
  cout << "Enter ID: " << endl;
  cin >> ID;
  cin.ignore();
  cout << "Enter GPA: " << endl;
  cin >> GPA;
  cin.ignore();
  
  Student* student1 = new Student(name, ID, GPA); //create the first student object using the input data

  //get input for the second student
  cout << "Enter Name: " << endl;
  cin.get(name, 80);
  cin.get();
  cout << "Enter ID: " << endl;
  cin >> ID;
  cin.ignore();
  cout << "Enter GPA: " << endl;
  cin >> GPA;
  cin.ignore();
  
  Student* student2 = new Student(name, ID, GPA); //create the second student object using the input data

  //add the students to the linked list
  add(head, student1);
  add(head, student2);
  
  print(head); //print the list of students
   
  return 0;
}

//function to add a student to the linked list
void add(Node*& head, Student* newStudent)
{
  if(head == NULL) //if the list is empty
    {
      head = new Node(newStudent); //set the head to the new node
    }
  else
    {
      Node* current = head;
      //jump over to the end of the list
      while(current->getNext() != NULL)
	current = current->getNext();
      current->setNext(new Node(newStudent)); //add the new student to the end of the list
    }
}

//function to print the list of students
void print(Node* next)
{
  if(next != NULL) //if the current node is not null
    {
      //print all details of the student in the current node
      cout << "Name: " << (next->getStudent())->getName() << ", ";
      cout << "ID: " << (next->getStudent())->getID() << ", ";
      cout << "GPA: " << next->getStudent()->getGPA() << endl;
      print(next->getNext()); //recursive call to print the next node
    }
}
