#include "Teacher.h"

void Teacher::addClassId(string classId) {
    this->classIds.push_back(classId);
}

void Teacher::display() 
// phúc : xem danh sách lớp, danh sách sinh viên từng lớp, xem sửa điểm sv//
{
    cout << "Teacher ID: " << id << endl;
    cout << "Teacher Name: " << name << endl;

    cout << "Classes:" << endl;
    for (string c : classIds) {
        cout << "- " << c << endl;
    }
}

void Teacher::editGrade(Student &st) {
    cout << "\nStudent: " << st.getName() << endl;

    cout << "Current process grade: "
         << st.getProcessGrade() << endl;

    cout << "Current final grade: "
         << st.getFinalGrade() << endl;

    double process, finalGrade;

    cout << "New process grade: ";
    cin >> process;

    cout << "New final grade: ";
    cin >> finalGrade;

    st.setProcessGrade(process);
    st.setFinalGrade(finalGrade);

    cout << "Update successful!" << endl;
}
