#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

class GradedActivity {
protected:
    double score; // To hold the numeric score

public:
    GradedActivity() : score(0.0) {}
    void setScore(double s) { score = s; }
    double getScore() const { return score; }
    char getLetterGrade() const;
};

#endif // GRADEDACTIVITY_H