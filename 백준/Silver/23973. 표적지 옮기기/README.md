# [Silver I] 표적지 옮기기 - 23973 

[문제 링크](https://www.acmicpc.net/problem/23973) 

### 성능 요약

메모리: 11528 KB, 시간: 232 ms

### 분류

구현, 브루트포스 알고리즘

### 제출 일자

2024년 11월 29일 16:31:44

### 문제 설명

<p>효석이는 <em>N</em> x <em>M</em> 크기의 격자판 모양 사격판과 19 × 19 크기의 격자판 모양 표적지를 가지고 있다.</p>

<p>효석이는 사격판에 사격 연습을 하던 도중, 사격이 끝난 사격판 위에 표적지를 올려 1점부터 10점까지 정확히 한 번씩 점수를 얻을 수 있는지가 궁금해졌다. </p>

<p>궁금해하는 효석이를 위해 아래의 규칙을 지키면서 표적지의 중심인 10점 칸이 사격판의 어떤 칸 위에 있어야 하는지 구해주자.</p>

<ul>
	<li>사격판과 표적지 모두 격자 한 칸의 크기는 1 x 1로 동일하다.</li>
	<li>사격판의 <em>i</em>행 <em>j</em>열 칸은 (<em>i</em>,<em> j</em>)이며, 가장 왼쪽 상단 칸은 (0, 0), 가장 오른쪽 하단 칸은 (<em>N</em>-1, <em>M</em>-1)이다.</li>
	<li>사격판 위에 표적지를 올려 사격이 명중한 칸에 해당하는 점수를 얻을 수 있다.</li>
	<li>사격판은 회전시킬 수 없으며, 사격판 위에 표적지를 올릴 때는 격자선이 일치하도록 올려야 한다.</li>
	<li>표적지와 사격판은 일부만 겹쳐도 된다.</li>
</ul>

<p>아래의 그림은 표적지와 점수를 나타낸 그림이다.</p>

<p style="text-align: center;"><img alt="" src="" style="width: 400px; height: 404px;"></p>

### 입력 

 <p>첫째 줄에 사격판의 크기를 나타내는 정수 <em>N</em>과 <em>M</em>이 주어진다. (1 ≤ <em>N</em>, <em>M</em> ≤ 2,500)</p>

<p>다음 <em>N</em>개의 줄에는 사격판의 정보가 주어진다. 0은 사격이 명중하지 않은 칸을, 1은 사격이 명중한 칸을 의미한다. 사격이 명중한 칸의 개수는 최대 100,000개이다.</p>

### 출력 

 <p>표적지의 중심 칸이 위치해야 하는 사격판의 칸의 행과 열 번호를 출력한다. 가능한 정답이 여러가지인 경우에는 아무거나 출력한다. 가능한 정답이 없다면 -1을 출력한다.</p>

