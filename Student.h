#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
 public:
  Student(); //default constructor to initialize student objects without data
  Student(char*, int, double); //constructor that takes a name (char*), ID (int), and GPA (double)
  char* getName(); //function to return the name of the student
  int getID(); //function to return the ID of the student
  double getGPA(); //function to return the GPA of the student
  
 private:
  char* name; //pointer to a character arry to hold the student's name
  int ID; //integer to hold the student's ID
  double GPA; //double to hold the student's GPA
};

#endif
