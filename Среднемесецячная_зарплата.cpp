#include <iostream>

using namespace std;

int main()
{
    float P, tax, prod, workers, worker, monthly_worker;
    cout << "Whats the daily profit: ";
    cin >> P;
    
    tax = P * 0.6;
    prod = P * 0.3;
    workers = P * 0.1;
    worker = workers/8;
    monthly_worker = worker * 30;
    
    cout << "The daily tax is equal to: " << tax << endl;
    cout << "The daily production and development is equal to: " << prod << endl;
    cout << "The daily salary for all 8 workeres is equal to: " << workers << endl;    
    cout << "Thus the daily salary for each worker is equal to: " << worker << endl;
    cout << "And the monthly salary is equal to: " << monthly_worker << endl;
    return 0;
}
