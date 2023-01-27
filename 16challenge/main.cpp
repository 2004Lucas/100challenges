#include <iostream>
using namespace std;

int main() {
    int cigarettesPerDay, yearsSmoked;
    cout &#8203;`oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter the number of cigarettes smoked per day: \";\n    cin >>"}`&#8203; cigarettesPerDay;
    cout &#8203;`oaicite:{"index":1,"invalid_reason":"Malformed citation << \"Enter the number of years smoked: \";\n    cin >>"}`&#8203; yearsSmoked;

    int minutesLostPerCigarette = 10;
    int minutesLostPerDay = cigarettesPerDay * minutesLostPerCigarette;
    int minutesLostPerYear = minutesLostPerDay * 365;
    int minutesLostTotal = minutesLostPerYear * yearsSmoked;
    int daysLost = minutesLostTotal / (24 * 60);

    cout << "The smoker will lose " << daysLost << " days of life due to smoking." << endl;

    return 0;
}
