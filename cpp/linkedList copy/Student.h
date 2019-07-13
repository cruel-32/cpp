struct Student {   
    int student_number;
    string name;
    float korea;
    float english;
    float math;
};

Student* createStudentInfo(int student_number);

void showStudentInfo(void* data);
