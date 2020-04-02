//
//  main.cpp
//  Ch9-8q1
//
//  Created by Chris on 12/3/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>


struct StudentGrade
{
    std::string name;
    char grade;
};


class GradeMap
{

private:
    
    std::vector<StudentGrade> m_map;
    
public:
    
    GradeMap()
    {
        
    }
    
    char& operator[] (const std::string &name);
    
};


char& GradeMap::operator[] (const std::string &name)
{
    for (auto &student : m_map)
    {
        if (student.name == name)
            return student.grade;
    }
    
    StudentGrade newStudentGrade;
    newStudentGrade.name = name;
    //StudentGrade temp {name , ' '};
    m_map.push_back(newStudentGrade);
    return (m_map.back()).grade;
    
}



int main(int argc, const char * argv[]) {
    
    /*GradeMap grades;
    grades["Joe"] = 'A';
    grades["Frank"] = 'B';
    std::cout << "Joe has a grade of " << grades["Joe"] << '\n';
    std::cout << "Frank has a grade of " << grades["Frank"] << '\n';
   */
    
    GradeMap grades;
    
    char& gradeJoe = grades["Joe"]; // does a push_back
    gradeJoe = 'A';
    
    char& gradeFrank = grades["Frank"]; // does a push_back
    gradeFrank = 'B';
    
    std::cout << "Joe has a grade of " << gradeJoe << '\n';
    std::cout << "Frank has a grade of " << gradeFrank << '\n';
    
    return 0;
}
