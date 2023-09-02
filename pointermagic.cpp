#include<iostream>
using namespace std;

class eptr
{
  public:
  eptr(int p_x, int* p_y);
  void print();
  private:
  int x;
  int* y;
  };

eptr::eptr(int p_x, int* p_y)
:x(p_x), y(p_y)
{
  int c = x;
  int* d = y;
  }

void eptr::print()
{
  cout << x << ", " << *y << endl;
  }

int main() {
  int a = 0;
  int* b = &a;
  eptr example(a, b);
  example.print();
  a += 2;
  example.print();
  return 0;
}
/* ok so basically i did this because i was trying to
figure out a way to update a variable and have the 
object attribute update alongside with it. I figured
out how to do it after a while so hooray. */

//here is the permanent link to everything above:
// https://pythontutor.com/visualize.html#code=%23include%3Ciostream%3E%0Ausing%20namespace%20std%3B%0A%0Aclass%20eptr%0A%7B%0A%20%20public%3A%0A%20%20eptr%28int%20p_x,%20int*%20p_y%29%3B%0A%20%20void%20print%28%29%3B%0A%20%20private%3A%0A%20%20int%20x%3B%0A%20%20int*%20y%3B%0A%20%20%7D%3B%0A%0Aeptr%3A%3Aeptr%28int%20p_x,%20int*%20p_y%29%0A%3Ax%28p_x%29,%20y%28p_y%29%0A%7B%0A%20%20int%20c%20%3D%20x%3B%0A%20%20int*%20d%20%3D%20y%3B%0A%20%20%7D%0A%0Avoid%20eptr%3A%3Aprint%28%29%0A%7B%0A%20%20cout%20%3C%3C%20x%20%3C%3C%20%22,%20%22%20%3C%3C%20*y%20%3C%3C%20endl%3B%0A%20%20%7D%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20a%20%3D%200%3B%0A%20%20int*%20b%20%3D%20%26a%3B%0A%20%20eptr%20example%28a,%20b%29%3B%0A%20%20example.print%28%29%3B%0A%20%20a%20%2B%3D%202%3B%0A%20%20example.print%28%29%3B%0A%20%20return%200%3B%0A%7D%0A/*%20ok%20so%20basically%20i%20did%20this%20because%20i%20was%20trying%20to%0Afigure%20out%20a%20way%20to%20update%20a%20variable%20and%20have%20the%20%0Aobject%20attribute%20update%20alongside%20with%20it.%20I%20figured%0Aout%20how%20to%20do%20it%20after%20a%20while%20so%20hooray.%20*/&cumulative=false&heapPrimitives=nevernest&mode=edit&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D&textReferences=false