# [Silver III] 현대모비스 입사 프로젝트 - 27922 

[문제 링크](https://www.acmicpc.net/problem/27922) 

### 성능 요약

메모리: 3200 KB, 시간: 108 ms

### 분류

그리디 알고리즘, 정렬

### 제출 일자

2025년 7월 3일 17:16:32

### 문제 설명

<blockquote>
<p><em>현대모비스는 글로벌 자동차 부품 기업으로 자율주행, 커넥티비티, 전동화 분야에 역량을 집중해 스마트 모빌리티 시대를 선도하고 있습니다.</em></p>

<p><em>현대모비스는 미래 모빌리티 시대를 견인할 소프트웨어 전문 교육제도 운영, 설계인력 확충, 글로벌 거점 업무 확대 등을 통해 하드웨어에서 소프트웨어 중심으로 연구개발 역량을 강화하고 있습니다.</em></p>
</blockquote>

<p>취업준비생인 도훈이는 꿈의 직장인 현대모비스의 채용 공고를 보고, 현대모비스에 입사하기 위해 소프트웨어 및 하드웨어 역량을 기르는 단기간 집중 공부 프로젝트를 시작했다. 효율적인 공부를 위해 자동차 소프트웨어의 핵심 기술인 통신기술, 알고리즘, 기계구조학 역량을 기를 수 있는 강의 $N$개를 찾았고, 그 중 $i$번째 강의는 세 종류의 역량을 각각 $a_i,b_i,c_i$만큼 증가시켜준다고 한다.</p>

<p>도훈이는 $N$개의 강의를 모두 수강하고 싶었으나, 현대모비스 입사 지원 시기가 얼마 남지 않았기에 $K$개의 강의만을 골라 수강하고자 한다. 또한, 시간이 촉박해 세 종류의 역량을 모두 기르기는 힘들다고 판단한 도훈이는 선택과 집중을 통해 세 종류의 역량 중 두 가지 역량만을 최대화하고자 한다. 이미 공부하느라 바쁜 도훈이를 위해, $N$개의 강의 중 $K$개의 강의를 수강했을 때 얻을 수 있는 두 종류의 역량의 합의 최댓값을 구해주자.</p>

### 입력 

 <p>첫 번째 줄에 강의의 총 개수 $N$과 수강할 강의의 개수 $K$가 공백으로 구분되어 주어진다. $(1\leq K\leq N\leq 100\, 000)$</p>

<p>두 번째 줄부터 $N+1$번째 줄까지, $i+1$번째 줄에 $i$번째 강의를 들었을 때 증가하는 통신기술 역량 $a_i$, 알고리즘 역량 $b_i$, 기계구조학 역량 $c_i$가 공백으로 구분되어 정수로 주어진다. $(0\leq a_i,b_i,c_i\leq 10\, 000)$</p>

### 출력 

 <p>$K$개의 강의를 수강했을 때 얻을 수 있는 두 종류의 역량의 합의 최댓값을 출력한다.</p>

