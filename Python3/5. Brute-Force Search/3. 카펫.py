def solution(brown, yellow):
    for length in range(1, yellow+1):
        if (yellow % length != 0):
            continue
            
        width = yellow / length
        
        if ((width + length) * 2 + 4 == brown):
            return [width + 2, length + 2]

'''
정확성  테스트
    테스트 1 〉	통과 (0.00ms, 10.2MB)
    테스트 2 〉	통과 (0.01ms, 10.1MB)
    테스트 3 〉	통과 (0.10ms, 10.3MB)
    테스트 4 〉	통과 (0.01ms, 10.2MB)
    테스트 5 〉	통과 (0.00ms, 10.2MB)
    테스트 6 〉	통과 (0.02ms, 10.3MB)
    테스트 7 〉	통과 (0.05ms, 10.2MB)
    테스트 8 〉	통과 (0.11ms, 10.2MB)
    테스트 9 〉	통과 (0.10ms, 10.2MB)
    테스트 10 〉	통과 (0.15ms, 10.2MB)
    테스트 11 〉	통과 (0.00ms, 10.2MB)
    테스트 12 〉	통과 (0.01ms, 10.2MB)
    테스트 13 〉	통과 (0.01ms, 10.2MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''