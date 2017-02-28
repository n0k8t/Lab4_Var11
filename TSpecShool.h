#include "TSchool.h"

#ifndef LAB_4_TSPECSHOOL_H
#define LAB_4_TSPECSHOOL_H

class TSpecShool : public TSchool
{
private:
    std::string SpecName;

public:
    TSpecShool() : TSchool(), SpecName("")
    {}

    TSpecShool(const std::string & type, size_t number, const std::string & specName) : TSchool(type, number), SpecName(specName)
    {}

    virtual void Print(std::ostream & stream)
    {
        TSchool::Print(stream);
        stream << "Specialization name: " << SpecName << std::endl;
    }
};


#endif //LAB_4_TSPECSHOOL_H
