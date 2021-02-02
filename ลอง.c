#include <iostream>
using namespace std;

int main()
{
   
    int number_1,number_2,i,count_div5 = 0;
    
    cout << "Enter Number : ";
    cin >> number_1;
    cout << "Enter Number : ";
    cin >> number_2;
    
    for(i=number_1;i<=number_2;i++)
    {
      if((i % 5) == 0)
      {
         cout << "(" << i << ") ";   
         count_div5 = count_div5 + 1;
      }
      else
      {
           cout << i << " ";   
      }                             
    }
   
    cout << endl;
    cout << "Result : " << count_div5;
   
    cout << endl << endl;
    system("pause");
   
    return 0;
}