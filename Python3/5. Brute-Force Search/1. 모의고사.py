def solution(answers):
    answer = []
    score = [0, 0, 0]
    player_0 = [1, 2, 3, 4, 5]
    player_1 = [2, 1, 2, 3, 2, 4, 2, 5]
    player_2 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    
    for i in range(len(answers)):
        if answers[i] == player_0[i % len(player_0)]:
            score[0] += 1
        if answers[i] == player_1[i % len(player_1)]:
            score[1] += 1
        if answers[i] == player_2[i % len(player_2)]:
            score[2] += 1
    
    if max(score) == score[0]:
        answer.append(1)
        
    if max(score) == score[1]:
        answer.append(2)
        
    if max(score) == score[2]:
        answer.append(3)
    
    return answer

'''
정확성  테스트
    테스트 1 〉	통과 (0.01ms, 10.3MB)
    테스트 2 〉	통과 (0.01ms, 10.3MB)
    테스트 3 〉	통과 (0.01ms, 10.3MB)
    테스트 4 〉	통과 (0.01ms, 10.3MB)
    테스트 5 〉	통과 (0.02ms, 10.3MB)
    테스트 6 〉	통과 (0.03ms, 10.3MB)
    테스트 7 〉	통과 (1.68ms, 10.3MB)
    테스트 8 〉	통과 (0.55ms, 10.3MB)
    테스트 9 〉	통과 (3.20ms, 10.3MB)
    테스트 10 〉	통과 (1.45ms, 10.3MB)
    테스트 11 〉	통과 (3.07ms, 10.4MB)
    테스트 12 〉	통과 (3.32ms, 10.3MB)
    테스트 13 〉	통과 (0.19ms, 10.3MB)
    테스트 14 〉	통과 (3.08ms, 10.3MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''