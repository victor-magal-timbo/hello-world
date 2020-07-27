
#include <iostream>

using namespace std;

int
main ()
{
  int a, b;
  cout << "diga dois numeros: ";
  cin >> a >> b;
  cout << "a soma e: " << a + b << endl;
  cout << "a subtracao e: " << a - b << endl;
  cout << "o produto e: " << a * b << endl;
  if (b != 0)
    {
      cout << "o quociente e: " << a / b << endl;
    }
  else
    {
      cout << " divisao invalida! ";
    }

  return 0;
}
