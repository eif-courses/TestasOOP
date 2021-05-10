//
// Created by Marius on 5/10/2021.
//

#ifndef TESTASOOP_QUIZ_H
#define TESTASOOP_QUIZ_H
#include <vector>
#include "Question.h"

class Quiz {
private:
  string name;
  vector<Question> questions;
public:
  Quiz(const string &name);
  const string &GetName() const;
  const vector<Question> &GetQuestions() const;
  void Add(Question q);


};


#endif //TESTASOOP_QUIZ_H
