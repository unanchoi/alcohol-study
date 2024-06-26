//
// https://school.programmers.co.kr/learn/courses/30/lessons/12924
//
#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    int answer = 1;
    for (int i=1; i<n; i++) {
        int sum = 0;
        int start = i;

        while (sum < n)
            sum += start++;

        if (sum == n)
            answer++;
    }
    return answer;
}