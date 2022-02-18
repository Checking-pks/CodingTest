def solution(id_list, report, k):
    answer = [0] * len(id_list)
    reporter = {}
    reportTimes = {}

    for id in id_list:
        reporter[id] = []
        reportTimes[id] = 0

    for r in report:
        nowReport = r.split()

        if nowReport[1] not in reporter[nowReport[0]]:
            reporter[nowReport[0]].append(nowReport[1])
            reportTimes[nowReport[1]] += 1

    for idx, id in enumerate(id_list):
        for r in reporter[id]:
            if reportTimes[r] >= k:
                answer[idx] += 1

    return answer

'''
정확성  테스트
    테스트 1 〉	통과 (0.01ms, 10.2MB)
    테스트 2 〉	통과 (0.03ms, 10.2MB)
    테스트 3 〉	통과 (505.09ms, 37.8MB)
    테스트 4 〉	통과 (0.04ms, 10.3MB)
    테스트 5 〉	통과 (0.04ms, 10.2MB)
    테스트 6 〉	통과 (1.24ms, 10.5MB)
    테스트 7 〉	통과 (3.16ms, 10.5MB)
    테스트 8 〉	통과 (5.89ms, 10.9MB)
    테스트 9 〉	통과 (196.23ms, 23.2MB)
    테스트 10 〉	통과 (194.60ms, 22.9MB)
    테스트 11 〉	통과 (517.83ms, 37.8MB)
    테스트 12 〉	통과 (0.35ms, 10.3MB)
    테스트 13 〉	통과 (0.23ms, 10.3MB)
    테스트 14 〉	통과 (112.42ms, 22.2MB)
    테스트 15 〉	통과 (237.90ms, 31.1MB)
    테스트 16 〉	통과 (0.15ms, 10.3MB)
    테스트 17 〉	통과 (0.23ms, 10.3MB)
    테스트 18 〉	통과 (0.39ms, 10.4MB)
    테스트 19 〉	통과 (0.67ms, 10.4MB)
    테스트 20 〉	통과 (115.97ms, 22.2MB)
    테스트 21 〉	통과 (274.91ms, 30.8MB)
    테스트 22 〉	통과 (0.01ms, 10.2MB)
    테스트 23 〉	통과 (0.01ms, 10.2MB)
    테스트 24 〉	통과 (0.01ms, 10.2MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''