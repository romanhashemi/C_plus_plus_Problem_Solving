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
void display_student ()
{
    for (auto s : student)
    {
        cout << "ID: " << s.id << "-" << "Name: " << s.name << "-" << "Grade: " << s.grade << endl;
        
    }
}

void avg_grade()
{
    if (student.empty())
        return;
        
    float sum = 0;
    
    for (auto s : student)
    {
        sum += s.grade;
    }
    
    cout << "Average grade: " << sum/student.size() << endl;
   
}




void search_student()
{
    int id;
    cout << "Enter ID to search: " << endl;
    cin >> id ;
    
    for (auto s: student)
    {
        if (s.id == id)
        {
            cout << "ID Match: " << s.name << "-"<< s.grade << endl; 
            return;
        }
    }
    
    cout << "Student not found.";
    
    

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
            case 2 :
                search_student();
                break;
            case 3 : 
                display_student();
                break;
            case 4 :
                avg_grade();
                break;
            case 5 :
                cout << "Goodbye!"<< endl;
                break;
        
            default:
                cout << "Invalid entry." << endl;
        }
       
    } while (choice !=5);

    return 0;
}









