#include <iostream>
#include <string_view>

using namespace std;

void compute(int age = 27, double weight = 72.4, double distance = 12.5);
void greet_teacher(string_view name_sv = "teacher", int homeworks = 12,
                   int exams = 4, double pass_rate = 0.5,
                   string_view first_dpmt = "Computer Sce");

int main() {
  // compute();

  // Call and use default arguments
  greet_teacher();
  greet_teacher("Mr Bean");
  greet_teacher("Mr Hamston", 7);
  greet_teacher("Mr Walker", 7, 3);
  greet_teacher("Mr Paku", 7, 3, 0.7);
  greet_teacher("Mr Kojo", 7, 3, 0.7, "Applied Mathematics");

  return 0;
}

void compute(int age, double weight, double distance) {
  cout << "Doing computations on age : " << age << " weight : " << weight
       << " and distance : " << distance << endl;
}

void greet_teacher(string_view name_sv, int homeworks, int exams,
                   double pass_rate, string_view first_dpmt) {
  cout << endl;
  cout << "Good morning " << name_sv << "!" << endl;
  cout << "In the past semester, we had " << homeworks << " homeworks, and "
       << exams << " exams. The pass rate was around : " << pass_rate << endl;
  cout << "The best performing department is : " << first_dpmt << endl;
}