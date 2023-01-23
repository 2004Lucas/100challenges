#include <iostream>
using namespace std;
int main()
{
    float distance;
    cout << "Enter a distance in meters: ";
    cin >> distance;
    float km = distance / 1000;
    float dam = distance / 10;
    float hm = distance / 100;
    float dm = distance * 10;
    float cm = distance * 100;
    float mm = distance * 1000;
    cout << "The distance of " << distance << "m corresponds to:" << endl;
    cout << km << "Km" << endl;
    cout << dam << "Dam" << endl;
    cout << hm << "Hm" << endl;
    cout << dm << "Dm" << endl;
    cout << cm << "Cm" << endl;
    cout << mm << "Mm" << endl;
    return 0;
}
