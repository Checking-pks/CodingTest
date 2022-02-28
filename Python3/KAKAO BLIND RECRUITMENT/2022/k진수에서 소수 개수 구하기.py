from math import sqrt

def isPrime(n):
    if n < 2:
        return False
    
    for i in range(2, int(sqrt(n))+1):
        if n % i == 0:
            return False

    return True

def changeBaseNumber(n, base):
    result = ""

    while n > 0:
        result = str(n % base) + result
        n //= base

    return result

def solution(n, k):
    answer = 0
    baseNumber = changeBaseNumber(n, k)
    nowNumber = "0"
    
    for i in baseNumber:
        if i != '0':
            nowNumber += i
        else:
            if isPrime(int(nowNumber)):
                answer += 1

            nowNumber = "0"

    if isPrime(int(nowNumber)):
        answer += 1
    
    return answer

'''
정확성  테스트
    테스트 1 〉	통과 (92.62ms, 10.2MB)
    테스트 2 〉	통과 (0.03ms, 10.4MB)
    테스트 3 〉	통과 (0.03ms, 10.3MB)
    테스트 4 〉	통과 (0.04ms, 10.2MB)
    테스트 5 〉	통과 (0.02ms, 10.3MB)
    테스트 6 〉	통과 (0.04ms, 10.3MB)
    테스트 7 〉	통과 (0.03ms, 10.2MB)
    테스트 8 〉	통과 (0.06ms, 10.4MB)
    테스트 9 〉	통과 (0.03ms, 10.3MB)
    테스트 10 〉	통과 (0.03ms, 10.4MB)
    테스트 11 〉	통과 (0.03ms, 10.4MB)
    테스트 12 〉	통과 (0.03ms, 10.3MB)
    테스트 13 〉	통과 (0.03ms, 10.2MB)
    테스트 14 〉	통과 (0.02ms, 10.4MB)
    테스트 15 〉	통과 (0.02ms, 10.3MB)
    테스트 16 〉	통과 (0.03ms, 10.3MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''