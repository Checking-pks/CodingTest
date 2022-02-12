def solution1(info, query):
    for i in range(len(info)):
        info[i] = info[i].split()

    for i in range(len(query)):
        query[i] = query[i].split(' and ')
        query[i][3:4] = query[i][3].split()

    answer = []

    for i in query:
        answer.append(
            len(list(filter(lambda x:
                (i[0] == '-' or info[x][0] == i[0]) and
                (i[1] == '-' or info[x][1] == i[1]) and
                (i[2] == '-' or info[x][2] == i[2]) and
                (i[3] == '-' or info[x][3] == i[3]) and
                int(info[x][4]) >= int(i[4]), 
                range(len(info))
            )))
        )

    return answer

'''
정확성  테스트
    테스트 1 〉	통과 (0.09ms, 10.3MB)
    테스트 2 〉	통과 (0.15ms, 10.4MB)
    테스트 3 〉	통과 (0.62ms, 10.3MB)
    테스트 4 〉	통과 (6.17ms, 10.6MB)
    테스트 5 〉	통과 (25.74ms, 10.6MB)
    테스트 6 〉	통과 (65.73ms, 10.5MB)
    테스트 7 〉	통과 (27.82ms, 11.1MB)
    테스트 8 〉	통과 (131.76ms, 12.6MB)
    테스트 9 〉	통과 (131.82ms, 12.4MB)
    테스트 10 〉	통과 (145.69ms, 12.5MB)
    테스트 11 〉	통과 (46.36ms, 10.7MB)
    테스트 12 〉	통과 (81.52ms, 10.5MB)
    테스트 13 〉	통과 (27.05ms, 11MB)
    테스트 14 〉	통과 (130.16ms, 11.5MB)
    테스트 15 〉	통과 (129.44ms, 11.6MB)
    테스트 16 〉	통과 (25.70ms, 10.7MB)
    테스트 17 〉	통과 (63.59ms, 10.6MB)
    테스트 18 〉	통과 (127.49ms, 11.6MB)
효율성  테스트
    테스트 1 〉	실패 (시간 초과)
    테스트 2 〉	실패 (시간 초과)
    테스트 3 〉	실패 (시간 초과)
    테스트 4 〉	실패 (시간 초과)
채점 결과
    정확성: 40.0
    효율성: 0.0
    합계: 40.0 / 100.0
'''