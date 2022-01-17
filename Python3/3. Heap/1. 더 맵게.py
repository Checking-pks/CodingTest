def solution(scoville, K):
    answer = 0
    scoville.sort(reverse = True)

    while scoville[-1] < K:
        if len(scoville) == 1:
            return -1
    
        food_1 = scoville.pop();
        food_2 = scoville.pop();

        scoville.append(food_1 + food_2 * 2)
        scoville.sort(reverse = True)
        answer += 1

    return answer

'''
정확성  테스트
    테스트 1 〉	통과 (0.01ms, 10.2MB)
    테스트 2 〉	통과 (0.01ms, 10.3MB)
    테스트 3 〉	통과 (0.01ms, 10.3MB)
    테스트 4 〉	통과 (0.01ms, 10.2MB)
    테스트 5 〉	통과 (0.00ms, 10.2MB)
    테스트 6 〉	통과 (1.53ms, 10.2MB)
    테스트 7 〉	통과 (1.20ms, 10.2MB)
    테스트 8 〉	통과 (0.09ms, 10.2MB)
    테스트 9 〉	통과 (0.07ms, 10.2MB)
    테스트 10 〉	통과 (0.93ms, 10.3MB)
    테스트 11 〉	통과 (0.50ms, 10.2MB)
    테스트 12 〉	통과 (3.11ms, 10.2MB)
    테스트 13 〉	통과 (1.23ms, 10.2MB)
    테스트 14 〉	통과 (0.01ms, 10.2MB)
    테스트 15 〉	통과 (1.82ms, 10.2MB)
    테스트 16 〉	통과 (0.00ms, 10.3MB)
효율성  테스트
    테스트 1 〉	실패 (시간 초과)
    테스트 2 〉	실패 (시간 초과)
    테스트 3 〉	실패 (시간 초과)
    테스트 4 〉	실패 (시간 초과)
    테스트 5 〉	실패 (시간 초과)
채점 결과
    정확성: 76.2
    효율성: 0.0
    합계: 76.2 / 100.0
'''

import heapq

def solution_2(scoville, K):
    answer = 0
    scoville.sort()
    
    while scoville[0] < K:
        if len(scoville) == 1:
            return -1
    
        food_1 = heapq.heappop(scoville);
        food_2 = heapq.heappop(scoville);

        heapq.heappush(scoville, food_1 + food_2 * 2)
        answer += 1

    return answer

'''
정확성  테스트
    테스트 1 〉	통과 (0.01ms, 10.2MB)
    테스트 2 〉	통과 (0.00ms, 10.2MB)
    테스트 3 〉	통과 (0.01ms, 10.2MB)
    테스트 4 〉	통과 (0.01ms, 10.2MB)
    테스트 5 〉	통과 (0.01ms, 10.2MB)
    테스트 6 〉	통과 (0.51ms, 10.1MB)
    테스트 7 〉	통과 (0.42ms, 10.2MB)
    테스트 8 〉	통과 (0.07ms, 10.2MB)
    테스트 9 〉	통과 (0.05ms, 10.3MB)
    테스트 10 〉	통과 (0.34ms, 10.2MB)
    테스트 11 〉	통과 (0.23ms, 10.2MB)
    테스트 12 〉	통과 (0.77ms, 10.2MB)
    테스트 13 〉	통과 (0.41ms, 10.2MB)
    테스트 14 〉	통과 (0.01ms, 10.3MB)
    테스트 15 〉	통과 (0.54ms, 10.2MB)
    테스트 16 〉	통과 (0.00ms, 10.2MB)
효율성  테스트
    테스트 1 〉	통과 (182.34ms, 16.3MB)
    테스트 2 〉	통과 (367.94ms, 21.9MB)
    테스트 3 〉	통과 (1334.41ms, 49.5MB)
    테스트 4 〉	통과 (138.29ms, 15MB)
    테스트 5 〉	통과 (1674.70ms, 51.9MB)
채점 결과
    정확성: 76.2
    효율성: 23.8
    합계: 100.0 / 100.0
'''