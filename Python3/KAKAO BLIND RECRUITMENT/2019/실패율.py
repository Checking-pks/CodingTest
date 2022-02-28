def solution(N, stages):
    cantClear = [[0, i+1] for i in range(0, N+1)]
    players = len(stages)
    
    for i in stages:
        cantClear[i-1][0] += 1
    
    for i in cantClear:
        if players == 0:
            break
        
        nowPlayer = i[0]
        i[0] = nowPlayer / players
        players -= nowPlayer

    cantClear = sorted(cantClear, reverse = True, key=lambda x : x[0])
    
    return [i[1] for i in cantClear if i[1] <= N]

'''
정확성  테스트
    테스트 1 〉	통과 (0.01ms, 10.3MB)
    테스트 2 〉	통과 (0.16ms, 10.2MB)
    테스트 3 〉	통과 (1.10ms, 10.3MB)
    테스트 4 〉	통과 (8.39ms, 10.7MB)
    테스트 5 〉	통과 (18.68ms, 14.9MB)
    테스트 6 〉	통과 (0.12ms, 10.1MB)
    테스트 7 〉	통과 (0.79ms, 10.2MB)
    테스트 8 〉	통과 (10.20ms, 10.8MB)
    테스트 9 〉	통과 (22.77ms, 15MB)
    테스트 10 〉	통과 (10.02ms, 10.9MB)
    테스트 11 〉	통과 (8.75ms, 10.7MB)
    테스트 12 〉	통과 (12.98ms, 11.3MB)
    테스트 13 〉	통과 (14.05ms, 11.3MB)
    테스트 14 〉	통과 (0.04ms, 10.1MB)
    테스트 15 〉	통과 (6.01ms, 10.6MB)
    테스트 16 〉	통과 (3.05ms, 10.4MB)
    테스트 17 〉	통과 (6.75ms, 10.4MB)
    테스트 18 〉	통과 (2.98ms, 10.3MB)
    테스트 19 〉	통과 (0.61ms, 10.3MB)
    테스트 20 〉	통과 (4.81ms, 10.3MB)
    테스트 21 〉	통과 (17.24ms, 10.8MB)
    테스트 22 〉	통과 (18.89ms, 18.3MB)
    테스트 23 〉	통과 (17.85ms, 11.4MB)
    테스트 24 〉	통과 (17.28ms, 11.5MB)
    테스트 25 〉	통과 (0.01ms, 10.4MB)
    테스트 26 〉	통과 (0.01ms, 10.1MB)
    테스트 27 〉	통과 (0.01ms, 10MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''