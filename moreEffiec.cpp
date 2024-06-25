#include <iostream>
using namespace std;

int find(int p, int q) {
    if (q == 0) return 1;
    if (q % 2 == 0) {
        int result = find(p, q / 2);
        return result * result;
    } else {
        int result = find(p, q - 1);
        return p * result;
    }
}

int main() {
    int p = 2;
    int q = 4;
    int result = find(p, q);
    cout << "Our Answer is:- " << result << endl;
    return 0;
}
