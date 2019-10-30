#include <iostream>
   using namespace std;
namespace moh {
const int i = 4;
int variable; // these are local to the int variable; // compilation unit
}
const int x = 1; // this is global
  int main() {
     cout << moh::i << x << moh::variable<<endl;
    moh::variable = 100;

    cout << moh::variable << endl;

     return 0;
}