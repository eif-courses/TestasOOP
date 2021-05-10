//
// Created by Marius on 5/10/2021.
//

#include "Question.h"


const string &Question::GetText() const {
  return text;
}

const string &Question::GetAnswer() const {
  return answer;
}

Question::Question(const string &text, const string &answer) : text(text), answer(answer) {}



