#include <iostream>
#include "student.h"

int main() {
    Student stud;                         
    stud.set_value(1, "Tom", 'm');        
    stud.display();

    Student stud1(7, "ice", 'm');         
    stud1.display();

    return 0;
}
