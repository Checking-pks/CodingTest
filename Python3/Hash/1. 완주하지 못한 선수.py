def solution(participant, completion):
    participant.sort()
    completion.sort()

    for i in range(0, len(completion)):
        if participant[i] != completion[i]:
            return participant[i]

    return participant[len(participant) - 1]

'''
정확성  테스트
    테스트 1 〉	통과 (0.01ms, 10.3MB)
    테스트 2 〉	통과 (0.01ms, 10.3MB)
    테스트 3 〉	통과 (0.21ms, 10.3MB)
    테스트 4 〉	통과 (0.47ms, 10.3MB)
    테스트 5 〉	통과 (0.47ms, 10.3MB)
효율성  테스트
    테스트 1 〉	통과 (31.65ms, 18.1MB)
    테스트 2 〉	통과 (67.19ms, 22.3MB)
    테스트 3 〉	통과 (75.21ms, 24.8MB)
    테스트 4 〉	통과 (81.57ms, 26.3MB)
    테스트 5 〉	통과 (89.02ms, 26.3MB)
채점 결과
    정확성: 50.0
    효율성: 50.0
    합계: 100.0 / 100.0
'''