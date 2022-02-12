def solution(new_id):
    answer = ''
    
    # process 1
    new_id = new_id.lower()
    
    # process 2
    for i in new_id:
        if i.isalpha() or i.isdigit() or i == '-' or i == '_' or i == '.':
            answer += i

    # process 3
    i = 0
    while i < len(answer):
        if answer[i-1] == '.' and answer[i] == '.':
            answer = answer[:i] + answer[i+1:]
        else:
            i += 1

    # process 5
    answer = 'a' if len(answer) == 0 else answer
    
    # process 4
    answer  = answer[1:]  if answer[0]  == '.' else answer
    answer  = answer[:-1] if answer[-1] == '.' else answer

    # process 6
    answer = answer[0:15]
    answer = answer[:-1] if answer[-1] == '.' else answer

    # process 7
    while len(answer) < 3:
        answer += answer[-1]

    return answer

'''
정확성  테스트
    테스트 1 〉	통과 (0.01ms, 10.2MB)
    테스트 2 〉	통과 (0.01ms, 10.3MB)
    테스트 3 〉	통과 (0.01ms, 10.4MB)
    테스트 4 〉	통과 (0.01ms, 10.2MB)
    테스트 5 〉	통과 (0.01ms, 10.2MB)
    테스트 6 〉	통과 (0.01ms, 10.2MB)
    테스트 7 〉	통과 (0.01ms, 10.2MB)
    테스트 8 〉	통과 (0.01ms, 10.2MB)
    테스트 9 〉	통과 (0.00ms, 10.4MB)
    테스트 10 〉	통과 (0.01ms, 10.2MB)
    테스트 11 〉	통과 (0.01ms, 10.3MB)
    테스트 12 〉	통과 (0.03ms, 10.3MB)
    테스트 13 〉	통과 (0.01ms, 10.3MB)
    테스트 14 〉	통과 (0.02ms, 10.2MB)
    테스트 15 〉	통과 (0.02ms, 10.2MB)
    테스트 16 〉	통과 (0.04ms, 10.2MB)
    테스트 17 〉	통과 (0.10ms, 10.2MB)
    테스트 18 〉	통과 (0.16ms, 10.2MB)
    테스트 19 〉	통과 (0.74ms, 10.3MB)
    테스트 20 〉	통과 (0.16ms, 10.2MB)
    테스트 21 〉	통과 (0.50ms, 10.4MB)
    테스트 22 〉	통과 (0.15ms, 10.2MB)
    테스트 23 〉	통과 (0.47ms, 10.2MB)
    테스트 24 〉	통과 (0.26ms, 10.3MB)
    테스트 25 〉	통과 (0.82ms, 10.2MB)
    테스트 26 〉	통과 (0.51ms, 10.2MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''