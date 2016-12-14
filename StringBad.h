#ifndef _STRING_BAD_
#define _STRING_BAD_
#include<iostream>
class StringBad{
   private:
       char *str;
       int len;
       static int num_strings;
   public:
       StringBad(const char* s);
       StringBad();
       ~StringBad();
   friend std::ostream& operator<<(std::ostream& out,const StringBad &bad);
};
#endif
