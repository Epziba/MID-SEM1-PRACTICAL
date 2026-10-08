#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main()
{
    queue<string> students;
    int choice;
    string name;
    {
        cout << "\n1. Add Student";
        cout << "\n2. Serve First Student";
        cout << "\n3. Display Waiting Students";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter student name: ";
            cin >> name;
            students.push(name);
            cout << "Student added to the queue.\n";
            break;
        case 2:
            if (students.empty())
            {
                cout << "Queue is empty. No student to serve.\n";
            }
            else
            {
                cout << "Serving student: " << students.front() << endl;
                students.pop();
            }
            break;
        case 3:
            if (students.empty())
            {
                cout << "Queue is empty. No students are waiting.\n";
            }
            else
            {
                queue<string> temp = students;
                cout << "\nWaiting Students:\n";

                while (!temp.empty())
                {
                    cout << temp.front() << endl;
                    temp.pop();
                }
            }
            break;
        case 4:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
