//
// Created by Marius on 5/10/2021.
//

#include "Quiz.h"

Quiz::Quiz(const string &name) : name(name) {}

const string &Quiz::GetName() const {
  return name;
}

const vector<Question> &Quiz::GetQuestions() const {
  return questions;
}

void Quiz::Add(Question q) {
  Quiz::questions.emplace_back(q);
}
