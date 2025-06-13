#ifndef TEST_H 
#define TEST_H 

#include<iostream>

#include<vector>
#include<unordered_map>


using namespace std; 


class Person{
  protected:
  string name; 
  int id; 

  public:  
  virtual void displayInfo()=0; // only acts as an abstract class, this is also a pure virtual function 

};

class Student:protected Person{
  private:
  string grade; 
  string coursesEnrolled; 
  
  public:
  string student_course;
  vector<Student> student_details_vector;
  int course_total;

  Student(){};

  Student(string coursesEnrolled){
    this->coursesEnrolled=coursesEnrolled; //polymorphism
  };

  Student(string name, int id, string grade, string student_course,string coursesEnrolled){
    this->name=name;
    this->id=id;
    this->grade=grade;
    this->student_course=student_course;
    this->coursesEnrolled=coursesEnrolled;

  };

  void addData();

 void displayInfo();

 void deleteStudent(); 

 

  
}; 

class Instructor:protected Person{ //inheritance
  public:
  string course_taught;
  string office_hours;
  int total_course;

  
  vector<Instructor> vector_instructor;
  Instructor(){};

  Instructor(string course_taught)
  {
    this->course_taught=course_taught;

  };

  Instructor(string name,int id,string office_hours,string course_taught){
    this->course_taught=course_taught;
    this->office_hours=office_hours;
    this->name=name;
    this->id=id;


  };

  void add_instructor_data();

   void displayInfo();

   void deleteInfo();




};

class Course{
  public:
  int total_course;
  int course_code; 
  string course_name; 
  string instructor_name; 
  int student_ID; 
  int teacher_code;
  vector<Course> course_vector;

  Course(){};
  
  Course(string course_name){
    this->course_name=course_name;
  }

  Course(int course_code,string course_name,string instructor_name,int student_ID){

this->course_code=course_code;
this->course_name=course_name;
this->instructor_name=instructor_name;
this->student_ID=student_ID;

  };

void add_course();

void displayInfo();

void assign_instructor();
void assignCourseInfo();


}; 


class Menu{
  public:

  Student S;
  Instructor I;
  Course C;

  void menu();
    


};



#endif
