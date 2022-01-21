from functools import cmp_to_key

def cmp(x, y):
    return -1 if (str(x) + str(y) > str(y) + str(x)) else 1

def solution(numbers):
    answer = ''
    
    numbers = sorted(numbers, key=cmp_to_key(cmp))
    
    for i in numbers:
        answer += str(i)
        
    while len(answer) > 1 and answer[0] == '0':
        answer = answer[1:]

    return answer

'''
정확성  테스트
    테스트 1 〉	통과 (665.40ms, 16.5MB)
    테스트 2 〉	통과 (349.56ms, 13.4MB)
    테스트 3 〉	통과 (875.54ms, 18.8MB)
    테스트 4 〉	통과 (14.01ms, 10.3MB)
    테스트 5 〉	통과 (595.89ms, 15.7MB)
    테스트 6 〉	통과 (541.67ms, 14.9MB)
    테스트 7 〉	통과 (0.09ms, 10.2MB)
    테스트 8 〉	통과 (0.03ms, 10.3MB)
    테스트 9 〉	통과 (0.04ms, 10.1MB)
    테스트 10 〉	통과 (0.03ms, 10.2MB)
    테스트 11 〉	통과 (0.05ms, 10.2MB)
    테스트 12 〉	통과 (0.01ms, 10.1MB)
    테스트 13 〉	통과 (0.01ms, 10.3MB)
    테스트 14 〉	통과 (0.02ms, 10.2MB)
    테스트 15 〉	통과 (0.01ms, 10.2MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''