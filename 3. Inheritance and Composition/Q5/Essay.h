#ifndef ESSAY_H
#define ESSAY_H

#include "GradedActivity.h"

class Essay : public GradedActivity {
private:
    double grammar;
    double spelling;
    double length;
    double content;

public:
    Essay(double g, double s, double l, double c);
    void calculateScore();
};

#endif // ESSAY_H