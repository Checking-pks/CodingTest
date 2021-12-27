def solution(genres, plays):
    answer = []
    total_song_information = {}

    for i in range(len(genres)):
        if genres[i] in total_song_information:
            total_song_information[genres[i]][0] += plays[i]
            total_song_information[genres[i]][1] += [[i, plays[i]]]
        else:
            total_song_information[genres[i]] = [plays[i], [[i, plays[i]]]]

    total_song_information = sorted(total_song_information.values(), key = lambda x : x[0], reverse = True)

    for i in total_song_information:
        answer += sorted(i[1], key = lambda x : x[1], reverse = True)[0:2]

    return [i[0] for i in answer]

'''
정확성  테스트
    테스트 1 〉	통과 (0.01ms, 10.3MB)
    테스트 2 〉	통과 (0.01ms, 10.3MB)
    테스트 3 〉	통과 (0.01ms, 10.2MB)
    테스트 4 〉	통과 (0.01ms, 10.3MB)
    테스트 5 〉	통과 (0.06ms, 10.3MB)
    테스트 6 〉	통과 (0.05ms, 10.3MB)
    테스트 7 〉	통과 (0.04ms, 10.3MB)
    테스트 8 〉	통과 (0.03ms, 10.3MB)
    테스트 9 〉	통과 (0.01ms, 10.3MB)
    테스트 10 〉	통과 (0.06ms, 10.3MB)
    테스트 11 〉	통과 (0.02ms, 10.3MB)
    테스트 12 〉	통과 (0.03ms, 10.3MB)
    테스트 13 〉	통과 (0.06ms, 10.2MB)
    테스트 14 〉	통과 (0.09ms, 10.3MB)
    테스트 15 〉	통과 (0.02ms, 10.3MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''