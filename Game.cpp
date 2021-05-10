//
// Created by Marius on 5/10/2021.
//

#include "Game.h"

void Game::Play(const Quiz& quiz) {

  cout << "====================================" << endl;
  cout << quiz.GetName() << endl;
  cout << "====================================" << endl;

//  for(const auto& q: quiz.GetQuestions()){
//    cout << q.GetText() << endl;
//  }

  auto item = quiz.GetQuestions();

  for (int i = 0; i < item.size(); ++i) {
    cout << (i+1) << ". " << item[i].GetText() << endl;
  }

  int nr;
  cout << "iveskite klausimo nr:";
  cin >> nr;
  cout << "Iveskite jusu atsakyma: taip/ne?";
  string answer;
  cin >> answer;

  if(item[nr-1].GetAnswer() == answer){
    cout << "Jus atspejote!" << endl;
  }else{
    cout << "DEJA NEATSPEJOTE: " << "atsakymas: "<< item[nr-1].GetAnswer() << endl;
  }

}


