//Identifer
#include<iostream>
using namespace std;
int main(){
  // 1. An identifier can only begin with a letter or an underscore(_).
  int ram;
  int _ram;

  // 2. An identifier can consist of letters (A-Z or a-z), digits (0-9), and underscores (_). 
  int ram34_;

  // 3. White spaces and Special characters can not be used as the name of an identifier.
  // --> int ::s; (Invalid)
  // --> int ra m (Invalid)

  // 4. Keywords cannot be used as an identifier. 
  // --> int float (Invalid)

  // 5. Identifier must be unique in its namespace.
  int a;

  // 6. identifiers are case-sensitive in nature.
  int RAM;
  int ram;
  
return 0;
}