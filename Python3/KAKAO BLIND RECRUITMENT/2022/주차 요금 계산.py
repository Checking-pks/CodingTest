from math import ceil

def toMinute(t) :
    timeList = t.split(":")
    return int(timeList[0]) * 60 + int(timeList[1])

def solution(fees, records):
    result = {}
    totalTimes = {}
    carPark = {}

    for i in records:
        recordList = i.split()

        if recordList[2] == "IN":
            carPark[recordList[1]] = toMinute(recordList[0])
        else:
            parkingTimes = toMinute(recordList[0]) - carPark[recordList[1]]
            carPark[recordList[1]] = 23 * 60 + 59

            totalTimes[recordList[1]] = (totalTimes[recordList[1]] + parkingTimes) if recordList[1] in totalTimes else parkingTimes
    
    for key, value in carPark.items():
        totalTimes[key] = (totalTimes[key] + 23 * 60 + 59 - value) if key in totalTimes else (23 * 60 + 59 - value)

    for key, value in totalTimes.items():
        nowFees = fees[1]
        
        if value > fees[0]:
            nowFees += ceil((value - fees[0]) / fees[2]) * fees[3]

        result[key] = nowFees

    return [i[1] for i in sorted(list(result.items()))]

'''
정확성  테스트
    테스트 1 〉	통과 (0.03ms, 10.4MB)
    테스트 2 〉	통과 (0.03ms, 10.2MB)
    테스트 3 〉	통과 (0.05ms, 10.2MB)
    테스트 4 〉	통과 (0.11ms, 10.3MB)
    테스트 5 〉	통과 (0.25ms, 10.4MB)
    테스트 6 〉	통과 (0.29ms, 10.4MB)
    테스트 7 〉	통과 (2.48ms, 10.4MB)
    테스트 8 〉	통과 (0.85ms, 10.3MB)
    테스트 9 〉	통과 (0.16ms, 10.4MB)
    테스트 10 〉	통과 (1.89ms, 10.3MB)
    테스트 11 〉	통과 (2.92ms, 10.6MB)
    테스트 12 〉	통과 (1.79ms, 10.6MB)
    테스트 13 〉	통과 (0.03ms, 10.3MB)
    테스트 14 〉	통과 (0.04ms, 10.3MB)
    테스트 15 〉	통과 (0.03ms, 10.4MB)
    테스트 16 〉	통과 (0.03ms, 10.3MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''