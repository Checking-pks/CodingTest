def solution(p):
    if len(p) == 0:
        return ""
    
    u = ""
    v = ""
    stack = 0

    for i in range(len(p)):
        stack += 1 if p[i] == '(' else -1

        if stack == 0:
            u = p[:i+1]
            v = p[i+1:]
            break

    stack = 0
    for i in u:
        stack += 1 if i == '(' else -1

        if stack == 0:
            return u + solution(v)
        elif stack < 0:
            break
    
    s = "(" + solution(v) + ")"
    
    for i in range(1, len(u)-1):
        s += ')' if u[i] == '(' else '('

    return s

'''
정확성  테스트
    테스트 1 〉	통과 (0.01ms, 10.2MB)
    테스트 2 〉	통과 (0.01ms, 10.2MB)
    테스트 3 〉	통과 (0.01ms, 10.1MB)
    테스트 4 〉	통과 (0.02ms, 10.3MB)
    테스트 5 〉	통과 (0.01ms, 10.2MB)
    테스트 6 〉	통과 (0.01ms, 10.2MB)
    테스트 7 〉	통과 (0.01ms, 10.1MB)
    테스트 8 〉	통과 (0.01ms, 10.3MB)
    테스트 9 〉	통과 (0.01ms, 10.2MB)
    테스트 10 〉	통과 (0.01ms, 10.2MB)
    테스트 11 〉	통과 (0.02ms, 10.4MB)
    테스트 12 〉	통과 (0.04ms, 10.3MB)
    테스트 13 〉	통과 (0.03ms, 10.1MB)
    테스트 14 〉	통과 (0.05ms, 10MB)
    테스트 15 〉	통과 (0.06ms, 10.3MB)
    테스트 16 〉	통과 (0.13ms, 10.1MB)
    테스트 17 〉	통과 (0.23ms, 10.1MB)
    테스트 18 〉	통과 (0.39ms, 10.1MB)
    테스트 19 〉	통과 (0.26ms, 10.4MB)
    테스트 20 〉	통과 (0.22ms, 10.1MB)
    테스트 21 〉	통과 (0.23ms, 10.3MB)
    테스트 22 〉	통과 (0.11ms, 10.2MB)
    테스트 23 〉	통과 (0.31ms, 10.3MB)
    테스트 24 〉	통과 (0.08ms, 10.2MB)
    테스트 25 〉	통과 (0.13ms, 10.2MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''