#include "Question.h"
#include "Quiz.h"
#include "Game.h"

int main() {

  Question question1("Ar Liutas su USais?", "taip");
  Question question2("Ar Lietuva pirmauja europoje?", "taip");
  Question question3("Ar Zirafa gyvena Lietuvoje?", "ne");
  Question question4("Ar Studijos yra lengvos?", "ne");

  Quiz quiz("Random Questions");
  quiz.Add(question1);
  quiz.Add(question2);
  quiz.Add(question3);
  quiz.Add(question4);

  Quiz quiz2("ANother quiz Questions");
  quiz2.Add(question1);
  quiz2.Add(question2);
  quiz2.Add(question3);
  quiz2.Add(question4);
  quiz2.Add(question1);
  quiz2.Add(question2);
  quiz2.Add(question3);
  quiz2.Add(question4);

  vector<Quiz> quizzes{quiz, quiz2};


  while(true) {

    cout << "Pasirinkite is meniu dominancia tema:" << endl;
    for (int i = 0; i < quizzes.size(); ++i) {
      cout << (i + 1) << ". " << quizzes[i].GetName() << endl;
    }
    cout << "0. Uzdaryti programa!" << endl;
    int nr;
    cout << "iveskite: ";
    cin >> nr;
    if(nr == 0) break;

    if (nr == 1) {
      Game::Play(quiz);
    } else {
      Game::Play(quiz2);
    }

  }
cout << "Aciu kad zaidete!" << endl;






//  for (int i = 0; i < item.size(); ++i) {
//    cout << (i+1) << ". " << item[i].GetText() << endl;
//  }











  return 0;
}

