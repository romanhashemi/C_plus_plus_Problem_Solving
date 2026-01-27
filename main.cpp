#include <iostream> 
#include <vector>
using namespace std;

struct Student 
{
    int id;
    string name;
    float grade;
};

vector<Student> student;
void add_student () 
{
    Student s;
    
    cout << "Enter Student ID: " << endl;
    cin >> s.id;
    
    cout << "Enter Student's Name: " << endl;
    cin >> s.name;
    
    cout << "Enter Student's Grade: " << endl;
    cin >> s.grade;
    
    student.push_back(s);
    
    cout << "Student Added Successfully." << endl;
    
}

int main ()
{
    int choice;
    do 
    {
        cout << "1- Add Student \n 2- Search Student \n 3- Display Student \n 4- Show Average Grade \n 5- EXIT";
        cin >> choice;
        switch(choice)
        {
            case 1: 
                add_student();
                break;
            
            default:
                cout << "Invalid entry." << endl;
        }
    } while (choice !=5);

    return 0;
}












