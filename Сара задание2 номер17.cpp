#include <iostream>

using namespace std;
//17. Даны три переменные вещественного типа: A, B, C. Если их значения упорядочены по возрастанию или убыванию, то удвоить их;
//в противном случае заменить значение каждой переменной на противоположное. Вывести новые значения переменных A, B, C.

int main()
{
    int A,B,C;
    cout<<"1 number:";
    cin>>A;
    cout<<"2 number:";
    cin>>B;
    cout<<"3 number:";
    cin>>C;
    if ((A<=B) and (B<=C) and (A>=B) and (B>=C)) {
        A=A*4;
        B=B*4;
        C=C*4;
        cout<<"A"<<A<<" "<<"B"<<B<<" "<<"C"<<C;
    }
    else {
        A=A*(-4);
        B=B*(-4);
        C=C*(-4); 
        cout<<"A"<<A<<" "<<"B"<<B<<" "<<"C"<<C;
        
        
    }

    return 0;
}
