#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int num1, num2;
char opr;
cout << "Vnesi dva broja: ";
cin >> num1 >> num2;
cout << endl;
cout << "Vnesi oporator: + (Sobiranje), - (Odzemanje)," << " * (Mnozenje), / (Delenje): ";
cin >> opr;
cout << endl;
cout << num1 << " " << opr << " " << num2 << " = ";
switch (opr){
case '+':
cout << num1 + num2 << endl;
break;
case'-':
cout << num1 - num2 << endl;
break;
case'*':
cout << num1 * num2 << endl;
break;
case'/':
if (num2 != 0)
cout << num1 / num2 << endl;
else
cout << "Greska \nNemoze da se Deli so 0" << endl;
break;
default:
cout << "Nedozvolena operacija" << endl;
}
return 0;
}
