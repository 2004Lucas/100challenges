#include <iostream>
using namespace std;

int main() {
    int birth_year;
    cout &#8203;`oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter birth year: \";\n    cin >>"}`&#8203; birth_year;

    int age = 2022 - birth_year;
    string eligibility = (age >= 18) ? "can vote" : "cannot vote";

    cout << "Age: " << age << ", Eligibility: " << eligibility << endl;
    return 0;
}
