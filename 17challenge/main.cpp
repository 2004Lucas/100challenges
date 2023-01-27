#include <iostream>
using namespace std;

int main() {
    int speed;
    cout &#8203;`oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter the car's speed: \";\n    cin >>"}`&#8203; speed;
    int limit = 80;

    if (speed > limit) {
        int fine = 5 * (speed - limit);
        cout << "You have been fined $" << fine << " for exceeding the speed limit." << endl;
    }
    return 0;
}
