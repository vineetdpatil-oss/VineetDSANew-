#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    int rollNo;
    char name[50];
    float sgpa;
};

void input(Student s[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter Roll No, Name, and SGPA for student " << i + 1 << ":\n";
        cin >> s[i].rollNo >> s[i].name >> s[i].sgpa;
    }
}

void display(Student s[], int n) {
    cout << "\nRoll No\tName\tSGPA\n";
    for (int i = 0; i < n; i++)
        cout << s[i].rollNo << "\t" << s[i].name << "\t" << s[i].sgpa << "\n";
}


// 2. Insertion Sort by Name
void insertionSort(Student s[], int n) {
    for (int i = 1; i < n; i++) {
        Student key = s[i];
        int j = i - 1;
        while (j >= 0 && strcmp(s[j].name, key.name) > 0) {
            s[j + 1] = s[j];
            j--;
        }
        s[j + 1] = key;
    }
}


int main() {
    const int n = 15;
    Student s[n];
    input(s, n);

      insertionSort(s, n);
    cout << "\nSorted Alphabetically by Name:\n";
    display(s, n);

    return 0;
}
