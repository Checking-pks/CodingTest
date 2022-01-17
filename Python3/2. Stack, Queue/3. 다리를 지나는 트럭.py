from collections import deque

def solution(bridge_length, weight, truck_weights):
    answer = 1
    on_bridge = deque([0 for i in range(bridge_length-1)] + [truck_weights[0]])
    on_bridge_weight = truck_weights[0]

    for i in range(1, len(truck_weights)):
        while weight < on_bridge_weight + truck_weights[i] - on_bridge[0]:
            on_bridge.append(0)
            on_bridge_weight -= on_bridge.popleft()
            answer += 1

        on_bridge_weight += truck_weights[i]
        on_bridge.append(truck_weights[i])
        on_bridge_weight -= on_bridge.popleft()
        answer += 1
    
    while on_bridge_weight:
        on_bridge_weight -= on_bridge.popleft()
        answer += 1
    
    return answer

'''
정확성  테스트
    테스트 1 〉	통과 (0.43ms, 10.2MB)
    테스트 2 〉	통과 (7.04ms, 10.4MB)
    테스트 3 〉	통과 (0.01ms, 10.3MB)
    테스트 4 〉	통과 (13.28ms, 10.3MB)
    테스트 5 〉	통과 (52.09ms, 10.3MB)
    테스트 6 〉	통과 (16.10ms, 10.3MB)
    테스트 7 〉	통과 (0.34ms, 10.3MB)
    테스트 8 〉	통과 (0.14ms, 10.3MB)
    테스트 9 〉	통과 (2.06ms, 10.3MB)
    테스트 10 〉	통과 (0.09ms, 10.3MB)
    테스트 11 〉	통과 (0.01ms, 10.2MB)
    테스트 12 〉	통과 (0.14ms, 10.3MB)
    테스트 13 〉	통과 (0.51ms, 10.3MB)
    테스트 14 〉	통과 (0.02ms, 10.3MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''