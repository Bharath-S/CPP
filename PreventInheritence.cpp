#include <iostream>
using namespace std;

class CSealed
{
private:

 CSealed() {
 }

 friend class CBase;
};


class CBase : virtual CSealed
{

public:

 CBase() {
 }

};

/*class CDerived : public CBase
{

public:

 CDerived() {
 }

};*/

int main()
{

CBase oCBase;
return 0;
}
