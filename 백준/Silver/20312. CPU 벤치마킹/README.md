# [Silver I] CPU 벤치마킹 - 20312 

[문제 링크](https://www.acmicpc.net/problem/20312) 

### 성능 요약

메모리: 5928 KB, 시간: 260 ms

### 분류

수학, 다이나믹 프로그래밍

### 제출 일자

2025년 5월 9일 08:31:07

### 문제 설명

<p>윤이는 Uni-COM에서 컴퓨터 부품을 판매하고 있다. 윤이는 다양한 성능의 CPU를 취급하는데, 손님들이 CPU의 성능을 손쉽게 비교할 수 있도록 벤치마크 표를 만들려고 한다.</p>

<p>모든 CPU 쌍을 직접 비교하는 일은 번거로우므로, 윤이는 CPU를 성능이 낮은 것부터 높은 것까지 정렬한 뒤 이웃한 CPU의 성능이 몇 배 차이가 나는지 측정했다. 그러면 다른 CPU 쌍의 성능 차이도 쉽게 계산할 수 있기 때문이다. 예컨대 CPU $X, Y, Z$에 대해 $X$가 $Y$보다 $a$배 빠르고 $Y$가 $Z$보다 $b$배 빠르다면 $X$는 $Z$보다 $ab$배 빠르다는 사실을 알 수 있다.</p>

<p>윤이는 측정한 자료를 통해 모든 CPU 쌍의 성능 차이를 계산해서 벤치마크 표에 적었다. 구체적으로는, $1\le i<j\le N$을 만족하는 모든 순서쌍 $(i, j)$에 대해 $j$번째 CPU가 $i$번째 CPU보다 몇 배 빠른지를 표에 적었다. 윤이가 표에 적은 수를 전부 더한 값을 계산하시오. 단, 계산 결과가 커질 수 있으므로 $10^9+7$으로 나눈 나머지를 출력한다.</p>

### 입력 

 <p>첫 번째 줄에 CPU의 개수 $N$이 주어진다.</p>

<p>두 번째 줄에 $N-1$개의 양의 정수 $m_i$가 공백으로 구분되어 주어진다. $i+1$번째 CPU의 성능이 $i$번째 CPU의 성능의 $m_i$배임을 의미한다.</p>

### 출력 

 <p>윤이가 벤치마크 표에 적은 수의 합을 $10^9+7$으로 나눈 나머지를 출력한다.</p>

