def solution(progresses, speeds):
    answer = []
    nowDate = 0

    for i in range(len(progresses)):
        completeDate = (100 - progresses[i])/speeds[i]

        if completeDate > int(completeDate):
            completeDate = int(completeDate) + 1

        if nowDate >= completeDate:
            answer[len(answer)-1] += 1
        else:
            nowDate = completeDate
            answer.append(1)

    return answer

'''
��Ȯ��  �׽�Ʈ
    �׽�Ʈ 1 ��	��� (0.01ms, 10.2MB)
    �׽�Ʈ 2 ��	��� (0.04ms, 10.3MB)
    �׽�Ʈ 3 ��	��� (0.04ms, 10.2MB)
    �׽�Ʈ 4 ��	��� (0.02ms, 10.2MB)
    �׽�Ʈ 5 ��	��� (0.01ms, 10.2MB)
    �׽�Ʈ 6 ��	��� (0.01ms, 10.3MB)
    �׽�Ʈ 7 ��	��� (0.03ms, 10.3MB)
    �׽�Ʈ 8 ��	��� (0.01ms, 10.2MB)
    �׽�Ʈ 9 ��	��� (0.02ms, 10.2MB)
    �׽�Ʈ 10 ��	��� (0.03ms, 10.3MB)
    �׽�Ʈ 11 ��	��� (0.01ms, 10.2MB)
ä�� ���
    ��Ȯ��: 100.0
    �հ�: 100.0 / 100.0
'''