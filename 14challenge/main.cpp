#include <iostream>
using namespace std;

int main() {
    int days, kilometers;
    float cost_per_day = 90, cost_per_kilometer = 0.20, total_cost;

    cout `oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter the number of days the car was rented: \";\n    cin >>"}` days;
    cout `oaicite:{"index":1,"invalid_reason":"Malformed citation << \"Enter the number of kilometers driven: \";\n    cin >>"}` kilometers;

    total_cost = (days * cost_per_day) + (kilometers * cost_per_kilometer);
    cout << "Total cost to be paid: R$" << fixed << setprecision(2) << total_cost << endl;
    return 0;
}
