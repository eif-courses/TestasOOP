//
// Created by Marius on 5/10/2021.
//

#ifndef TESTASOOP_QUESTION_H
#define TESTASOOP_QUESTION_H
#include <iostream>
using namespace std;

class Question {
private:
  string text;
  string answer;
public:
  Question(const string &text, const string &answer);
  const string &GetText() const;
  const string &GetAnswer() const;


};


#endif //TESTASOOP_QUESTION_H
