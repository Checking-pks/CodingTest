def solution(clothes):
    answer = 1
    stack = 2
    
    clothes = sorted(clothes, key=lambda type:type[1])
    
    for i in range(1, len(clothes)):
        if clothes[i-1][1] != clothes[i][1]:
            answer *= stack
            stack = 1
        
        stack += 1
            
    return answer * stack - 1

'''
정확성  테스트
    테스트 1 〉	통과 (0.01ms, 10.2MB)
    테스트 2 〉	통과 (0.01ms, 10.2MB)
    테스트 3 〉	통과 (0.01ms, 10.3MB)
    테스트 4 〉	통과 (0.02ms, 10.2MB)
    테스트 5 〉	통과 (0.01ms, 10.2MB)
    테스트 6 〉	통과 (0.01ms, 10.2MB)
    테스트 7 〉	통과 (0.02ms, 10.2MB)
    테스트 8 〉	통과 (0.01ms, 10.3MB)
    테스트 9 〉	통과 (0.01ms, 10.2MB)
    테스트 10 〉	통과 (0.01ms, 10.2MB)
    테스트 11 〉	통과 (0.01ms, 10.2MB)
    테스트 12 〉	통과 (0.02ms, 10.2MB)
    테스트 13 〉	통과 (0.01ms, 10.3MB)
    테스트 14 〉	통과 (0.01ms, 10.3MB)
    테스트 15 〉	통과 (0.01ms, 10.2MB)
    테스트 16 〉	통과 (0.00ms, 10.2MB)
    테스트 17 〉	통과 (0.01ms, 10.2MB)
    테스트 18 〉	통과 (0.01ms, 10.2MB)
    테스트 19 〉	통과 (0.01ms, 10.3MB)
    테스트 20 〉	통과 (0.01ms, 10.2MB)
    테스트 21 〉	통과 (0.01ms, 10.3MB)
    테스트 22 〉	통과 (0.01ms, 10.2MB)
    테스트 23 〉	통과 (0.01ms, 10.2MB)
    테스트 24 〉	통과 (0.01ms, 10.2MB)
    테스트 25 〉	통과 (0.02ms, 10.3MB)
    테스트 26 〉	통과 (0.02ms, 10.2MB)
    테스트 27 〉	통과 (0.01ms, 10.2MB)
    테스트 28 〉	통과 (0.01ms, 10.2MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''