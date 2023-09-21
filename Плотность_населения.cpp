#include <iostream>

using namespace std;

int main()
{
    float populationD, area;
    int nrPpl;
    
    cout << "How many people reside in the area in question: ";
    cin >> nrPpl;
    
    cout << "What's the area of population in question: ";
    cin >> area;
    
    populationD = nrPpl / area;
    
    cout << "The population density of " << nrPpl << " people in the area " << area << " is " << populationD;
    return 0;
}
