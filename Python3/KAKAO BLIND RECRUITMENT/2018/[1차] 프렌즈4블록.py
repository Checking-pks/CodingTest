def checkBlocks(m, n, board):
    ErasedBlocks = set()

    for i in range(m-1):
        for j in range(n-1):
            if board[i][j] == board[i][j+1] == board[i+1][j] == board[i+1][j+1] != '0':
                ErasedBlocks.add((i, j))
                ErasedBlocks.add((i, j+1))
                ErasedBlocks.add((i+1, j))
                ErasedBlocks.add((i+1, j+1))

    for i, j in ErasedBlocks:
        board[i][j] = '0'

    for i in range(m-1, 0, -1):
        for j in range(n):
            if board[i][j] == '0':
                for k in range(i-1, -1, -1):
                    if board[k][j] != '0':
                        board[i][j] = board[k][j]
                        board[k][j] = '0'
                        break

    return len(ErasedBlocks) + checkBlocks(m, n, board) if len(ErasedBlocks) else 0

def solution(m, n, board):
    for i in range(m):
        board[i] = list(board[i])

    return checkBlocks(m, n, board)

'''
정확성  테스트
    테스트 1 〉	통과 (0.04ms, 10.4MB)
    테스트 2 〉	통과 (0.05ms, 10.2MB)
    테스트 3 〉	통과 (0.01ms, 10.2MB)
    테스트 4 〉	통과 (2.82ms, 10.3MB)
    테스트 5 〉	통과 (172.96ms, 10.2MB)
    테스트 6 〉	통과 (18.41ms, 10.2MB)
    테스트 7 〉	통과 (2.61ms, 10.4MB)
    테스트 8 〉	통과 (3.87ms, 10.1MB)
    테스트 9 〉	통과 (0.05ms, 10.2MB)
    테스트 10 〉	통과 (1.56ms, 10.3MB)
    테스트 11 〉	통과 (8.68ms, 10.2MB)
채점 결과
    정확성: 100.0
    합계: 100.0 / 100.0
'''