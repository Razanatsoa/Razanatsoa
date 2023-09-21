#include <iostream>

using namespace std;

int main()
{
    float area,B,b,h;
    printf("\n enter the value of base higher:  ");   
    scanf("%f", &B);
    
    printf("\n enter the value of smaller base: ");
    scanf("%f", &b);
    
    printf("\n enter the value of height: ");
    scanf("%f", &h);
    
    area=(B+b)*h /2;
    
    printf("The value of the area of the trapezium: =%.2f", area);
    
    return 0;
}
