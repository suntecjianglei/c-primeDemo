#ifndef STRING1_H
#define STRING1_H
#include<iostream>
using namespace std;
class String1{
  private:
      char *str;
      int len;
      static int num_strings;
  public:
      String1(const char *s);
      ~String1();
      String1();
      String1(const String1& s);
      int length()const{return len;}
      //overload operator methods
      String1& operator=(const String1&s);
      String1& operator=(const char *s);
      char& operator[](int i);
      const char& operator[](int i)const ;
      //overload friend operator
      friend ostream& operator<<(ostream& out,const String1& s);
      friend istream& operator>>(istream& in, String1& s);
      friend bool operator<(const String1& s1,const String1& s2);
      friend bool operator>(const String1& s1,const String1&s2);
      friend bool operator==(const String1&s1,const String1&s2);
      //static function
      static int howMany();
};
#endif
