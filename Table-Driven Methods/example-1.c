/***********************************
filename    :  example-1.c
author      :  gystriving
version     :  v1.0
describtion :  表驱动法实现分段查找，网上的例程，主要用来练习
other       :  none
***********************************/

#include <stdio.h>

#define MAX_GRADE_LEVEL 5

static char* EvaluateGrade(double dScore);

typedef struct 
{
    double aRangeLimit;
    char   *pszGrade;
}T_GRADE_MAP;

T_GRADE_MAP tGradeMap[MAX_GRADE_LEVEL]={
    {50.0,              "Fail"},
    {60.0,              "Pass"},    
    {70.0,              "Credit"},
    {80.0,              "Distinction"},
    {100.0,             "High Distinction"},
};

int main() {

    int ucTestNumber = 0;
    printf("*******test********");
    scanf("%d",&ucTestNumber);

    EvaluateGrade(ucTestNumber);




    return 0;
}









static char* EvaluateGrade(double dScore)
{
    int ucLevel = 0;
    for (; ucLevel < MAX_GRADE_LEVEL; ucLevel++)
    {
        if (dScore < tGradeMap[ucLevel].aRangeLimit)
        {
            return tGradeMap[ucLevel].pszGrade;
        }
        return tGradeMap[ucLevel].pszGrade; 
    }
    
}

