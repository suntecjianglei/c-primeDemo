#include "String1.h"
#include<cstring>
int String1::num_strings = 0;
String1::String1(const char *s)
{
   len = strlen(s);
   str = new char[len+1];
   strcpy(str,s);
   num_strings++;
}
String1::String1(){
   len = 0;
   str = NULL;
   num_strings++;
}
String1::String1(const String1&s) {
      len = s.len;
      str = new char[len+1];
      strcpy(str,s.str);
      num_strings++;
}
String1::~String1() {
   delete []str;
}
int String1::howMany() {
   return num_strings;
}
String1 & String1::operator=(const String1& s)
{
  if(this == &s)
      return *this;
  if(str)
      delete []str;
  if(!s.str)
      return *this;
  len = s.len;
  str = new char[len+1];
  strcpy(str,s.str);
  return *this;
}
String1& String1::operator=(const char*s) {
  if(!s)
      return *this;
  if(str)
      delete []str;
  len=  strlen(s);
  str = new char[len+1];
  strcpy(str,s);
  return *this;
}
char& String1::operator[](int i) {
   return str[i];
}
const char& String1::operator[](int i)const {
  return str[i];
}
ostream & operator<<(ostream& out,const String1&s) {
  out << s.str << endl;
  return out;
}
istream& operator>>(istream& in,String1&s) {
  
}
bool operator<(const String1&s1,const String1&s2){
  return strcmp(s1.str,s2.str) < 0;
}
 bool operator>(const String1&s1,const String1&s2) {
  return strcmp(s1.str,s2.str) > 0;
}
 bool operator==(const String1&s1,const String1&s2) {
  return strcmp(s1.str,s2.str) == 0;
}
