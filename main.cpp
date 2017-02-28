#include "TSchool.h"
#include "TSpecShool.h"
int main()
{
    TSchool * school = new TSchool("Ordinary School", 1800);
    TSchool * liceum = new TSpecShool("Liceum", 666, "Physics");
    TSpecShool * gymnasium = new TSpecShool("Gymnasium", 200, "Philosophy");

    school->Print(std::cout);
    std::cout << std::endl;

    liceum->Print(std::cout);
    std::cout << std::endl;

    gymnasium->Print(std::cout);
    std::cout << std::endl;

    delete school;
    delete liceum;
    delete gymnasium;
    return 0;
}