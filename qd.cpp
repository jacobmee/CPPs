#include <iostream>
using namespace std;

int main() {

    string input_string;
    cin >> input_string;

    int total_score = 0;
    int score = 0;

    for (int j = 0; j < input_string.length(); j++) {
        if (input_string[j] == 'Y') {
            if (score == 5) {
                score = 5;
            } else {
                score += 1;
            }

            total_score += score;
        } else if (input_string[j] == 'N') {
            score = 0;
        }

        // std::cout << "y: " << score << " z:" << total_score << endl;
    }
    std::cout << total_score << endl;
}