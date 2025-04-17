#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int id;
    float grade;
};

void addStudent(Student students[], int &count);                    // functions
void displayStudents(const Student students[], int count);
void searchStudentByID(const Student students[], int count);

int main() {
    Student students[1000];
    int count = 0; //no of students
    char operation;

    while (true) {
        
        cout << "\nMenu:"<<endl;
        cout << "A: Add"<<endl;
        cout << "B: Display"<<endl;
        cout << "C: Search"<<endl;
        cout << "D: Exit"<<endl;
        cout << "Enter input: ";
        cin >> operation;

        switch (operation) {
            case 'A': addStudent(students, count);
            break;
            case 'a':
                addStudent(students, count);
                break;
            case 'B': displayStudents(students, count);
            break;
            case 'b':
                displayStudents(students, count);                      //operations
                break;
            case 'C': searchStudentByID(students, count);
            break;
            case 'c':
                searchStudentByID(students, count);
                break;
            case 'D': cout << "Exiting program." << endl;
            return 0;
            case 'd':
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }
    return 0;
}

// Function to add a student
void addStudent(Student students[], int &count) {
    cout << "Enter student's name: ";
    cin.ignore(); // Clear the input buffer
    cin.getline(students[count].name, 50); // Read the name
    cout << "Enter student's ID: ";
    cin >> students[count].id;
    cout << "Enter student's grade: ";
    cin >> students[count].grade;
    count++;
    cout << "Student added successfully!\n" << endl;
}

// Function to display all students
void displayStudents(const Student students[], int count) {
    if (count == 0) {
        cout << "No students to display." << endl;
        return;
    }
    cout << "\nStudent Records:\n";
    for (int i = 0; i < count; i++) {
        cout << "Name: " << students[i].name << ", ID: " << students[i].id
             << ", Grade: " << students[i].grade << endl;
    }
}

// Function to search for a student by ID
void searchStudentByID(const Student students[], int count) {
    if (count == 0) {
        cout << "No students to search." << endl;
        return;
    }
    int searchID;
    cout << "Enter the ID of the student to search: ";
    cin >> searchID;
    for (int i = 0; i < count; i++) {
        if (students[i].id == searchID) {
            cout << "Student found: Name: " << students[i].name
                 << ", ID: " << students[i].id
                 << ", Grade: " << students[i].grade << endl;
            return;
        }
    }
    cout << "Student with ID " << searchID << " not found." << endl;
    
}