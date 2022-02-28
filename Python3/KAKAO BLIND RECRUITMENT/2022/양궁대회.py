def solution(n, info):
    info = [i+1 for i in info]

    apeachScore = sum([10 - i for i in range(len(info)) if info[i] > 1])
    maxScore = -apeachScore
    answer = []
    
    for i in range(len(info)):
        nowScore = -apeachScore
        nowResult = [0] * 11
        nowArrows = n
        
        for j in range(i, len(info)):
            if nowArrows >= info[j]:
                nowScore += (10 - j) * (2 if info[j] != 1 else 1)
                nowResult[j] = info[j]
                nowArrows -= info[j]          

            if nowArrows < 1:
                break

        if nowArrows > 0:
            nowResult[10] += nowArrows

        if nowScore >= maxScore and nowScore > 0:
            maxScore = nowScore
            answer = nowResult

        
    if maxScore == -apeachScore:
        answer = [-1]
    
    return answer