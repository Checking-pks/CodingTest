def solution(s):
    if len(s) == 1:
        return 1

    answer = 1000
    
    for i in range(int(len(s)/2), 0, -1):
        cutting = [s[i*j:i*(j+1)] for j in range(int(len(s)/i)+1)]
        compression = ""
        stack = 1

        for k in range(1, len(cutting)):
            if cutting[k-1] == cutting[k]:
                stack += 1
            else:
                compression += ("" if stack == 1 else str(stack)) + cutting[k-1]
                stack = 1

        compression += cutting[-1]
        
        answer = len(compression) if answer > len(compression) else answer
    
    return answer

'''
정확성  테스트
    테스트 1 〉	통과 (0.07ms, 10.1MB)
    테스트 2 〉	통과 (0.41ms, 10.1MB)
    테스트 3 〉	통과 (0.21ms, 10.3MB)
    테스트 4 〉	통과 (0.04ms, 10.3MB)
    테스트 5 〉	통과 (0.00ms, 10.1MB)
    테스트 6 〉	통과 (0.08ms, 10.3MB)
    테스트 7 〉	통과 (0.49ms, 10.3MB)
    테스트 8 〉	통과 (0.50ms, 10.2MB)
    테스트 9 〉	통과 (0.65ms, 10.3MB)
    테스트 10 〉	통과 (2.61ms, 10.3MB)
    테스트 11 〉	통과 (0.12ms, 10.2MB)
    테스트 12 〉	통과 (0.17ms, 10.3MB)
    테스트 13 〉	통과 (0.12ms, 10.4MB)
    테스트 14 〉	통과 (0.73ms, 10.2MB)
    테스트 15 〉	통과 (0.12ms, 10MB)
    테스트 16 〉	통과 (0.02ms, 10.3MB)
    테스트 17 〉	통과 (1.21ms, 10.3MB)
    테스트 18 〉	통과 (1.48ms, 10.2MB)
    테스트 19 〉	통과 (2.42ms, 10.1MB)
    테스트 20 〉	통과 (5.49ms, 10.2MB)
    테스트 21 〉	통과 (2.66ms, 10.3MB)
    테스트 22 〉	통과 (2.68ms, 10MB)
    테스트 23 〉	통과 (3.30ms, 10.1MB)
    테스트 24 〉	통과 (2.44ms, 10.3MB)
    테스트 25 〉	통과 (2.88ms, 10.2MB)
    테스트 26 〉	통과 (2.68ms, 10.2MB)
    테스트 27 〉	통과 (3.72ms, 10.2MB)
    테스트 28 〉	통과 (0.03ms, 10.2MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''