# [Gold II] 연락 - 32203 

[문제 링크](https://www.acmicpc.net/problem/32203) 

### 성능 요약

메모리: 5292 KB, 시간: 68 ms

### 분류

수학, 자료 구조, 조합론, 분리 집합

### 제출 일자

2025년 3월 11일 13:32:05

### 문제 설명

<p>$1$번부터 $N$번까지 $N$명의 사람들은 친목 도모를 위해 주기적으로 모임을 개최한다. $i$번 사람의 주민등록번호 뒷자리의 첫 번째 숫자는 $c_{i}$이다. $c_{i}$가  $1, 3, 5, 7, 9$ 중 하나이면 남성, $0, 2, 4, 6, 8$ 중 하나면 여성이다.</p>

<p>한 번의 만남에서, 한 쌍의 사람들이 서로 전화번호를 교환한다. $i$번째 모임에서 전화번호를 교환하는 사람은 $a_{i}$번 사람과 $b_{i}$번 사람이다.</p>

<p>전화번호를 교환한 두 사람은 서로 <strong>연락 가능</strong>하다. 또한, 임의의 $a$, $b$, $c$에 대해 $a$번 사람과 $b$번 사람이 <strong>연락 가능</strong>하고 $b$번 사람과 $c$번 사람이 <strong>연락 가능</strong>하다면, $a$번 사람과 $c$번 사람도 <strong>연락 가능</strong>하다. </p>

<p>모임은 총 $M$번 진행되었다. $i = 1, 2, \cdots, M$에 대하여, $i$번째 회의가 끝난 직후 서로 <strong>연락 가능</strong>한 남녀 쌍의 개수의 최솟값을 구하여라. </p>

### 입력 

 <p>첫째 줄에 모임에 참석하는 사람의 수 $N$과 개최된 모임의 수 $M$이 공백으로 구분되어 주어진다.</p>

<p>두 번째 줄에 정수 $c_{1}, c_{2}, \cdots, c_{N}$이 공백으로 구분되어 주어진다. $c_{i}$는 $i$번 사람의 주민등록번호 뒷자리의 첫 번째 숫자이다.</p>

<p>세 번째 줄부터 $M$개의 줄에 걸쳐, $M$개의 모임에 관한 정보가 주어진다. $2 + i$번째 줄에는 $i$번째 모임에서 전화번호를 교환하는 $a_{i}$와 $b_{i}$가 공백으로 구분되어 주어진다.</p>

### 출력 

 <p>첫 번째 줄부터 $M$개의 줄에 걸쳐, 답을 출력한다. $i$번째 줄에 $i$번째 모임 시점에서 서로 <strong>연락 가능</strong>한 남녀 쌍의 개수의 최솟값을 출력한다.</p>

