#include <iostream>

using namespace std;
//10. Даны три числа. Вывести порядковый номер большего из них

int main()
{
    int a,b,c,largest;
    cout<< "enter the number 1"<<endl;
    cin>>a;
    cout<< "enter the number 2"<<endl;
    cin>>b;
    cout<< "enter the number 3"<<endl;
    cin>>c;
    
    if(a>b and a>c)
    largest = a;
    else if (b>a and b>c)
    largest = b;
    else 
    largest = c;
    
    cout << "largest among "<<a<<" "<<b<<" "<<c<<"is"<<largest;
    
     return 0;
}
