#include <iostream>
using namespace std;

int main()
{
  int size = 5;
  int customer[size];
  int mangoes[size];
  int oranges[size];
  int bananas[size];
  int total_bill[size];

  for (int i = 0; i < size; i++)
  {
    customer[i] = i + 1; 
    cout << "Customer #" << customer[i] << " bought" << endl;
    cout << "Mangoes: ";
    cin >> mangoes[i];
    cout << "Oranges: ";
    cin >> oranges[i];
    cout << "Bananas: ";
    cin >> bananas[i];

    total_bill[i] = (mangoes[i] * 20) + (oranges[i] * 10) + (bananas[i] * 5);
  }

  cout << "Customer\tMangoes\tOranges\tBananas\tTotal Bill";
  for (int i = 0; i < size; i++)
  {
    cout << customer[i] << "\t\t" << mangoes[i] << "\t" << oranges[i] << "\t"
         << bananas[i] << "\t" << total_bill[i] << endl;
  }

  return 0;
}
