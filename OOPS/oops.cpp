#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**class Teacher{
    //Properties/ attributes
private:
    double salary;
public:
    string name;
    string subject;
    string dept;
Teacher(){ //constructor for class Teacher /non-parameterized
    
    dept = "Computer Science";// fixed dept for every Teacher / Initialization
}

Teacher(string name, string dept, string subject, double sal){  //parameterized constructor
    this->name = name;  //identify object and function parameters of same name to avoid confusion for the constructor
    this->dept = dept;
    this->subject = subject;
    salary = sal;
}

Teacher(Teacher &obj){ //pass by reference / copy constructor
    name = obj.name;
    dept = obj.dept;
    subject = obj.subject;
    salary = obj.salary;
    
}
    //methods
    void changeDept(string newDept){
        dept = newDept;
    }
    //Setter
    void setSalary(double s){
        salary = s;
    }
    //getter
    double getSalary(){
        return salary;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

class Account{
    //encapsulation i.e data hiding
private:
    double balance;
    double password;
public:
    string accountId;
    string username;
};

class Students {
public:
    string name;
    double* cgpaPtr;

    Students(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double(cgpa);
    }

    //destructor
    ~Students(){
        cout<<"Hi I delete Everything\n";
        delete cgpaPtr; //used in companies to avoid memeory leak
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    }
};**/

//Inheritance
/**class Person {
    public:
    string name;
    int age;

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class People : public Person{
    public:
    int rollno;

    People(string name, int age, int rollno): Person(string name, int age){
        this->rollno = rollno;
        
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No.: "<<rollno<<endl;
    }
};**/

//Multiple Inheritance
/**class Student {
    public:
    string name;
    int rollno;
};

class Teacher{
    public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher{

};**/

//Heirarchial Inheritance
/**class Person{
    public:
    string name;
    int age;
};
class Student : public Person{
    public:
    int rollno;
};
class Teacher : public Person{
    public:
    string subject;
};**/

//Polymorphism 
// CONSTRUCTOR OVERLAODING    
/**class Student{
    public:
    string name;

    Student() {
        cout<<"non-parameterized constructor"<<endl;
    }

    Student(string name){
        cout<<"parameterized constructor"<<endl;
        this->name = name;  
    }
    //MADE 2 CONSTRUCTORS TO CAUSE CONSTRUCTOR OVERLOADING WITH THIS CLASS STUDENT WILL CHANGE ITS FORM ACCORDINGLY WHICH IS PLOYMORPHISM
};**/

//FUNCTION OVERLOADING
/**class Print{
    public:
    void show(int a){
        cout<<"Integer: "<<a<<endl;
    }
    void show(char ch){
        cout<<"char: "<<ch<<endl;
    }
};**/

//FUNCTION OVERRIDING
    /**class Animal{
        public:
        void sound(){
            cout<<"Animal makes a sound"<<endl;
        }
    };

    class Dog : public Animal{
        public:
        void sound(){
            cout<<"Dog barks"<<endl;
        }
    };**/

//Virtual Functions
    /**class Animal{
        public:
        virtual void sound(){
            cout<<"Animal makes a sound"<<endl;
        }
    };

    class Dog : public Animal{
        public:
        void sound(){
            cout<<"Dog barks"<<endl;
        }
    };**/

//Abstraction
/**class Shape{ //abstract class
    virtual void draw() = 0; //pure virtual function
};

class Rectangle : public Shape{
    public:
    void draw(){
        cout<<"Drawing a rectangle"<<endl;
    }
};**/

//Static Variable
/**void fun(){
    static int x = 0;
    cout<<" x: "<<x<<endl;
    x++;
};**/

int main(){
    /**Student s1;  //non-parameterized constructor
    Student s2("John");  //parameterized constructor**/

    //Constructor Overloading
    /**Student s3;
    Student s4("Sam");**/

    //Function Overloading
    /**Print p;
    p.show(10);
    p.show('A');**/
    
    //Function Overriding
    /**Dog a;
       a.sound();**/
    
    /**Rectangle r1;
    r1.draw();**/ //calls the overridden draw function from Rectangle class

 /**fun(); o/p 0
    fun(); o/p 1
    fun(); o/p 2
    **/ //static variable x is incremented by 1 each time the function is called, hence the output will be 3, 4, 5 respectively.
    
    
    return 0;
};
   