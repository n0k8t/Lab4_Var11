#include <iostream>
#include <string>

#ifndef LAB_4_TSCHOOL_H
#define LAB_4_TSCHOOL_H

class TSchool
{
private:
    std::string Type;

protected:
    size_t Number;

public:
    TSchool() : Type(""), Number(0)
    {}

    TSchool(const std::string & type, size_t number) : Type(type), Number(number)
    {}

    virtual void Print(std::ostream & stream)
    {
        stream << "School type: " << Type << std::endl;
        stream << "Number of students: " << Number << std::endl;
    }
};
#endif //LAB_4_TSCHOOL_H
