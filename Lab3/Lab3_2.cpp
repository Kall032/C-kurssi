#include <iostream>
#include <string>
using namespace std;


class student {
private:
string name;
int age;
char grade;
string group = "2025 group";
public:
    // Setter for name
    void setName(string n) {
        name = n;
    }

    // Setter for age
    void setAge(int a) {
        age = a;
    }

    // Setter for grade
    void setGrade(char g) {
        grade = g;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Getter for age
    int getAge() {
        return age;
    }

    // Getter for grade
    char getGrade() {
        return grade;
    }
    void displayInfo() {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Grade: " << getGrade() << endl;
        cout << "Group: " << group << endl;
    }
};
int main() {
    student student1;

    // Setting values using setters
    student1.setName("John Doe");
    student1.setAge(20);
    student1.setGrade('A');

    // Displaying student info
    student1.displayInfo();

    return 0;
}