import heapq

def solution(jobs):
    answer = 0
    times = 0
    jobs_size = len(jobs)
    priority = []

    jobs.sort(reverse = True)

    while len(jobs):
        while len(jobs) and jobs[-1][0] <= times:
            job = jobs.pop()
            heapq.heappush(priority, (job[1], job[0]))
        
        if len(priority):
            now_job = heapq.heappop(priority)
            times += now_job[0]
            answer += times - now_job[1]
        else:
            times = jobs[-1][0]

    while len(priority):
        now_job = heapq.heappop(priority)
        times += now_job[0]
        answer += times - now_job[1]

    return int(answer/jobs_size)

'''
정확성  테스트
    테스트 1 〉	통과 (0.98ms, 10.2MB)
    테스트 2 〉	통과 (0.85ms, 10.3MB)
    테스트 3 〉	통과 (0.40ms, 10.3MB)
    테스트 4 〉	통과 (0.38ms, 10.2MB)
    테스트 5 〉	통과 (0.51ms, 10.3MB)
    테스트 6 〉	통과 (0.03ms, 10.3MB)
    테스트 7 〉	통과 (0.37ms, 10.3MB)
    테스트 8 〉	통과 (0.28ms, 10.2MB)
    테스트 9 〉	통과 (0.10ms, 10.3MB)
    테스트 10 〉	통과 (0.56ms, 10.4MB)
    테스트 11 〉	통과 (0.01ms, 10.2MB)
    테스트 12 〉	통과 (0.02ms, 10.3MB)
    테스트 13 〉	통과 (0.02ms, 10.3MB)
    테스트 14 〉	통과 (0.01ms, 10.3MB)
    테스트 15 〉	통과 (0.01ms, 10.3MB)
    테스트 16 〉	통과 (0.01ms, 10.2MB)
    테스트 17 〉	통과 (0.01ms, 10.3MB)
    테스트 18 〉	통과 (0.01ms, 10.3MB)
    테스트 19 〉	통과 (0.01ms, 10.3MB)
    테스트 20 〉	통과 (0.01ms, 10.3MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''