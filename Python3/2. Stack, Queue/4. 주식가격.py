def solution(prices):
    answer = [0] * len(prices)
    bucket = [[0, prices[0]]]

    for i in range(1, len(prices)):
        while prices[i] < bucket[len(bucket)-1][1]:
            pop_stock = bucket.pop()
            answer[pop_stock[0]] = i - pop_stock[0]
            if not bucket:
                break

        bucket.append([i, prices[i]])

    for i in bucket:
        answer[i[0]] = len(prices) - 1 - i[0] 
    
    return answer

'''
정확성  테스트
    테스트 1 〉	통과 (0.01ms, 10.4MB)
    테스트 2 〉	통과 (0.04ms, 10.3MB)
    테스트 3 〉	통과 (0.30ms, 10.3MB)
    테스트 4 〉	통과 (0.38ms, 10.3MB)
    테스트 5 〉	통과 (0.40ms, 10.3MB)
    테스트 6 〉	통과 (0.02ms, 10.3MB)
    테스트 7 〉	통과 (0.23ms, 10.2MB)
    테스트 8 〉	통과 (0.27ms, 10.3MB)
    테스트 9 〉	통과 (0.03ms, 10.2MB)
    테스트 10 〉	통과 (0.41ms, 10.3MB)
효율성  테스트
    테스트 1 〉	통과 (36.86ms, 18.8MB)
    테스트 2 〉	통과 (27.68ms, 17.6MB)
    테스트 3 〉	통과 (41.55ms, 19.4MB)
    테스트 4 〉	통과 (28.56ms, 18.2MB)
    테스트 5 〉	통과 (20.58ms, 16.8MB)
채점 결과
    정확성: 66.7
    효율성: 33.3
    합계: 100.0 / 100.0
'''