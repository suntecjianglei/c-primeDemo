#include "String1.h"
int main() {
  String1 s1;
  String1 s2("join");
  String1 s3(s2);
  String1 s4;
  s4 = s1;
  s4 = "hello";
  cout << s4;
  s4[0] = 'H';
  cout << s4;
  return 0;
}
