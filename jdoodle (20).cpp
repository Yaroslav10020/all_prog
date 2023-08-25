#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;

    vector<std::string> topics(N);
    for (int i = 0; i < N; i++) {
        cin >> topics[i];
    }

    vector<std::string> contest_tasks(M);
    for (int i = 0; i < M; i++) {
        cin >> contest_tasks[i];
    }

    vector<int> difficulties(M+1);
    for (int i = 0; i <= M; i++) {
        cin >> difficulties[i];
    }
    int count = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (contest_tasks[i] == topics[j]) {
                count = count + difficulties[j];
            }
            else {
                count = count + difficulties[0];
            }
        }
    }
    cout << count;
}