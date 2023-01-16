#include "AbstractClass.h"
ExamationPaper::ExamationPaper()
{
}

void ExamationPaper::doPaper()
{
    fillPersonalInfo();
    finishPaper();
    handInpaper();
}
