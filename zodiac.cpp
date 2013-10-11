#include <iostream>
using namespace std;

int ask_year();
int get_zodiac_index(int year);
  int correct_index(int i);
string get_animal(int i);

int main(){
  while(true){
    cout << get_animal(get_zodiac_index(ask_year())) << endl << endl;
  }
  return 0;
}

int ask_year(){
  int year;
  cout<<"please enter your birth year: ";
  cin >> year;
  return year;
}

int get_zodiac_index(int year){
  return year - 1996;
}

int correct_index(int i){
  i = i % 12;
  if (i < 0){
    i = i + 12;
  }
  return i;
}

string get_animal(int i){  
  char zodiac[12][12]= {"Rat","Ox","Tiger","Rabbit","Dragon","Snake","Horse","Goat","Monkey","Rooster","Dog","Pig"};
  i = correct_index(i);
  return zodiac[i];
}