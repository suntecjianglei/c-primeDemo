#include"StringBad.h"
#include<cstring>
using std::cout;
using std::endl;
int StringBad::num_strings = 0;
StringBad::StringBad(const char *s) {
    this->len = strlen(s);
    this->str = new char[this->len+1];
    strcpy(this->str,s);
    num_strings++;
   cout << "constructor called" << endl;
    cout << num_strings << ":\t" << str
	 << "\t" << "create" << endl << endl;
}
StringBad::StringBad() {
   len = 4;
   str = new char[len];
   strcpy(str,"c++");
   num_strings++;
   cout << "constructor called" << endl;
   cout << num_strings << ":\t" << str <<
        ":\t" << "create" << endl << endl;
}
StringBad::~StringBad() {
  cout << "desconstructor called" << endl;
  cout << str << " delete" << endl;
  --num_strings;
  cout << num_strings << "\tleft" << endl << endl;
  delete []str;
}
std::ostream& operator<<(std::ostream& out,const StringBad&bad){
  out << bad.str << endl;
  return out;
}
