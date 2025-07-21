// #include <iostream>
// using namespace std;

// class BallotBox {
// private:
//     int count[5];         // To store votes for candidates 1 to 5
//     int spoiltBallots;    // To store count of spoilt ballots

// public:
//     BallotBox() {
//         for (int i = 0; i < 5; i++)
//             count[i] = 0;
//         spoiltBallots = 0;
//     }

//     void readVotes(int totalVotes) {
//         int vote;
//         cout << "Enter the candidate number (1-5) for each vote:\n";
//         for (int i = 1; i <= totalVotes; i++) {
//             cout << "Vote #" << i << ": ";
//             cin >> vote;
//             if (vote >= 1 && vote <= 5)
//                 count[vote - 1]++;
//             else
//                 spoiltBallots++;
//         }
//     }

//     void displayResult() {
//         cout << "\nElection Results:\n";
//         for (int i = 0; i < 5; i++)
//             cout << "Candidate " << (i + 1) << ": " << count[i] << " votes\n";
//         cout << "Spoilt Ballots: " << spoiltBallots << endl;
//     }
// };

// int main() {
//     int n;
//     cout << "Enter total number of votes cast: ";
//     cin >> n;

//     BallotBox box;
//     box.readVotes(n);
//     box.displayResult();

//     return 0;
// }
#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
private:
    unsigned int valueA;
public:
    A(unsigned int val = 0) : valueA(val) {}

    // Declare friend function
    friend unsigned int add(const A& objA, const B& objB);
};

class B {
private:
    unsigned int valueB;
public:
    B(unsigned int val = 0) : valueB(val) {}

    // Declare friend function
    friend unsigned int add(const A& objA, const B& objB);
};

// Friend function definition
unsigned int add(const A& objA, const B& objB) {
    return objA.valueA + objB.valueB;
}

int main() {
    A objA(15);
    B objB(25);

    unsigned int sum = add(objA, objB);
    cout << "Sum of data members of A and B: " << sum << endl;

    return 0;
}

