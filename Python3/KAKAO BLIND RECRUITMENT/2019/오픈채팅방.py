def solution(record):
    answer = []
    information = {}

    for i in record:
        nowRecord = i.split()

        if nowRecord[0] == "Enter" or nowRecord[0] == "Change":
            information[nowRecord[1]] = nowRecord[2]

    for i in record:
        nowRecord = i.split()

        if nowRecord[0] == "Enter":
            answer.append(information[nowRecord[1]] + "님이 들어왔습니다.")
        elif nowRecord[0] == "Leave":
            answer.append(information[nowRecord[1]] + "님이 나갔습니다.")
    
    return answer

'''
정확성  테스트
    테스트 1 〉	통과 (0.01ms, 10.2MB)
    테스트 2 〉	통과 (0.01ms, 10.1MB)
    테스트 3 〉	통과 (0.04ms, 10.1MB)
    테스트 4 〉	통과 (0.06ms, 10.2MB)
    테스트 5 〉	통과 (0.63ms, 10.4MB)
    테스트 6 〉	통과 (0.66ms, 10.3MB)
    테스트 7 〉	통과 (0.55ms, 10.2MB)
    테스트 8 〉	통과 (0.70ms, 10.2MB)
    테스트 9 〉	통과 (0.72ms, 10.3MB)
    테스트 10 〉	통과 (0.68ms, 10.3MB)
    테스트 11 〉	통과 (0.41ms, 10.1MB)
    테스트 12 〉	통과 (0.39ms, 10.4MB)
    테스트 13 〉	통과 (0.67ms, 10.2MB)
    테스트 14 〉	통과 (0.73ms, 10.4MB)
    테스트 15 〉	통과 (0.04ms, 10.2MB)
    테스트 16 〉	통과 (0.01ms, 10.1MB)
    테스트 17 〉	통과 (0.07ms, 10.1MB)
    테스트 18 〉	통과 (0.07ms, 10.2MB)
    테스트 19 〉	통과 (0.64ms, 10.3MB)
    테스트 20 〉	통과 (0.62ms, 10.2MB)
    테스트 21 〉	통과 (0.73ms, 10.2MB)
    테스트 22 〉	통과 (0.61ms, 10.2MB)
    테스트 23 〉	통과 (0.67ms, 10.4MB)
    테스트 24 〉	통과 (0.66ms, 10.3MB)
    테스트 25 〉	통과 (72.53ms, 38.9MB)
    테스트 26 〉	통과 (78.47ms, 39.8MB)
    테스트 27 〉	통과 (83.06ms, 41.2MB)
    테스트 28 〉	통과 (84.44ms, 42.4MB)
    테스트 29 〉	통과 (84.30ms, 42.3MB)
    테스트 30 〉	통과 (67.30ms, 36.7MB)
    테스트 31 〉	통과 (70.21ms, 41.1MB)
    테스트 32 〉	통과 (62.33ms, 38.2MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''