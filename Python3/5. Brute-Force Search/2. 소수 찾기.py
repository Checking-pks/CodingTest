from math import sqrt
from itertools import permutations

def isPrime(number):
    if number <= 1:
        return False

    for i in range(2, int(sqrt(number)) + 1):
        if number % i == 0:
            return False
    
    return True

def solution(numbers):
    prime_list = set()
    numbers_permutation = set(permutations(numbers))

    for i in range(1 , len(numbers)):
        numbers_permutation.update(permutations(numbers, i))

    for i in numbers_permutation:
        num = int(''.join(i))

        if isPrime(num):
            prime_list.add(num)

    return len(prime_list)

'''
정확성  테스트
    테스트 1 〉	통과 (0.05ms, 10.4MB)
    테스트 2 〉	통과 (2.71ms, 10.5MB)
    테스트 3 〉	통과 (0.02ms, 10.4MB)
    테스트 4 〉	통과 (0.25ms, 10.4MB)
    테스트 5 〉	통과 (1.14ms, 10.4MB)
    테스트 6 〉	통과 (0.03ms, 10.4MB)
    테스트 7 〉	통과 (0.07ms, 10.4MB)
    테스트 8 〉	통과 (0.85ms, 10.5MB)
    테스트 9 〉	통과 (0.04ms, 10.4MB)
    테스트 10 〉	통과 (7.60ms, 10.4MB)
    테스트 11 〉	통과 (0.53ms, 10.4MB)
    테스트 12 〉	통과 (0.29ms, 10.4MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''