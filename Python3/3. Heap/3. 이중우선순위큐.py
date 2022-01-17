import heapq

def solution(operations):
    num_list = []

    for i in operations:
        if i[0] == 'I':
            heapq.heappush(num_list, int(i[2:]))
        else:
            if i[2] == '1':
                num_list = num_list[:-1]
            else:
                num_list = num_list[1:]

    if len(num_list):
        return [max(num_list), min(num_list)]

    return [0, 0]

'''
정확성  테스트
    테스트 1 〉	통과 (0.02ms, 10.4MB)
    테스트 2 〉	통과 (0.03ms, 10.3MB)
    테스트 3 〉	통과 (0.03ms, 10.3MB)
    테스트 4 〉	통과 (0.00ms, 10.2MB)
    테스트 5 〉	통과 (0.03ms, 10.4MB)
    테스트 6 〉	통과 (0.02ms, 10.4MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''