# [Silver II] 영일랜드 - 31871 

[문제 링크](https://www.acmicpc.net/problem/31871) 

### 성능 요약

메모리: 2024 KB, 시간: 8 ms

### 분류

백트래킹, 브루트포스 알고리즘, 그래프 이론

### 제출 일자

2024년 5월 21일 18:04:15

### 문제 설명

<p>영일랜드는 하나의 정문과 $N$개의 놀이기구로 이루어진 테마파크로 각각 식별 번호가 매겨져 있다. 정문은 $0$번, 놀이기구는 $1$번부터 $N$번까지의 번호로 구분된다. 정문과 놀이기구 혹은 놀이기구와 놀이기구 사이에는 단방향 간선으로 이어진다. 두 장소를 잇는 간선은 여러 개일 수 있으며 출발 장소와 도착 장소가 같을 수도 있다.</p>

<p>영일랜드에 놀러 간 정민이는 영일랜드의 정문에서 출발해 모든 놀이기구를 <strong>한 번씩만</strong> 탑승하고 정문으로 돌아오는 경로의 최장 시간이 궁금하다. 영일랜드의 놀이기구는 매혹적이어서 안 타고 지나갈 수 없어 각 놀이기구에는 최대 한 번씩만 도달할 수 있다. 또한, 모든 놀이기구를 탑승할 때까지 정문을 경유할 수 없으며 놀이기구 탑승 시간은 무시한다.</p>

<p>호기심이 많은 정민이를 위해 최장 시간을 알려주자. </p>

### 입력 

 <p>첫 번째 줄에는 놀이기구의 개수 $N$이 주어진다. $(1 \leq N \leq 9)$</p>

<p>두 번째 줄에는 간선의 개수 $M$이 주어진다. $(0 \leq M \leq 10\,000)$</p>

<p>다음 $M$개의 줄에는 정문 또는 놀이기구의 식별 번호 $u_i$에서 $v_i$로 향하는 간선의 이동 시간인 정수 $d_i$가 공백을 사이에 두고 차례로 주어진다. 간선의 이동 시간의 합은 $2^{31}$보다 작다. $(0 \leq u_i, v_i \leq N; 1 \leq d_i \leq 2^{31}-1)$</p>

### 출력 

 <p>정민이가 정문에서 출발해 모든 놀이기구를 한 번씩 탑승하고 다시 정문으로 돌아오는 경로의 최장 시간을 출력한다. 만약 불가능하다면 <span style="color:#e74c3c;"><code>-1</code></span>을 출력한다.</p>

