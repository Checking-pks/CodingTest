# [Silver I] 타이핑 - 25215 

[문제 링크](https://www.acmicpc.net/problem/25215) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

다이나믹 프로그래밍, 그리디 알고리즘

### 제출 일자

2025년 3월 27일 14:40:19

### 문제 설명

<p style="text-align: center;"><img alt="" src=""></p>

<p>민겸이는 영어 소문자와 대문자로 이루어진 문자열을 타이핑하기로 했다. 민겸이가 사용할 수 있는 버튼은 26개의 영어 알파벳 버튼과 마름모(◆) 버튼, 별(★) 버튼이다. 각 버튼은 아래와 같이 작동한다.</p>

<ul>
	<li>알파벳 버튼을 누르면 소문자 또는 대문자 중 하나가 입력된다. 이때, 마름모 버튼이 활성화되어있다면 대문자, 아니라면 소문자가 입력된다. 마름모 버튼은 처음에 비활성화되어있다.</li>
	<li>마름모 버튼은 한번 누를 때마다 활성화 및 비활성화 여부가 바뀐다.</li>
	<li>별 버튼을 누르면 마지막으로 입력한 알파벳의 대소문자 여부가 바뀐다. 예를 들어 대문자가 마지막으로 입력되었을 경우 소문자로 바뀌고, 소문자가 마지막으로 입력되었을 경우 대문자로 바뀐다. 만약 마지막으로 입력한 알파벳이 없다면 작동하지 않는다.</li>
</ul>

<p>민겸이는 사용할 수 있는 28개의 버튼을 이용해 어떤 문자열을 입력하려고 한다. 이때, 가능한 한 적은 횟수만큼 버튼을 누르고 싶다. 민겸이가 해당 문자열을 입력하기 위해 버튼을 최소 몇 번 눌러야 하는지 알려주자.</p>

### 입력 

 <p>입력은 한 줄로 주어진다.</p>

<p>첫 번째 줄에 민겸이가 타이핑할 문자열이 주어진다.</p>

### 출력 

 <p>민겸이가 해당 문자열을 입력하기 위해 버튼을 최소 몇 번 눌러야 하는지 출력한다.</p>

