# [Silver II] Superfactorial numeral system - 31371 

[문제 링크](https://www.acmicpc.net/problem/31371) 

### 성능 요약

메모리: 2020 KB, 시간: 152 ms

### 분류

사칙연산, 수학, 정수론

### 제출 일자

2024년 2월 23일 03:51:25

### 문제 설명

<p>On the most perfect of all planets i1c5l various numeral systems are being used during programming contests. In the second division they use <em>a superfactorial numeral system</em>. In this system any positive integer is presented as a linear combination of numbers converse to factorials:</p>

<p>$$\frac{p}{q} = a_1 + \frac{a_2}{2!} + \frac{a_3}{3!} + \ldots + \frac{a_n}{n!}\,.$$</p>

<p>Here $a_1$ is non-negative integer, and integers $a_k$ for $k \ge 2$ satisfy $0 \le a_k < k$. The nonsignificant zeros in the tail of the superfactorial number designation $\frac{p}{q}$ are rejected. The task is to find out how the rational number $\frac{p}{q}$ is presented in the superfactorial numeral system.</p>

### 입력 

 <p>Single line contains two space-separated integers $p$ and $q$ ($1 \le p \le 10^6$, $1 \le q \le 10^6$).</p>

### 출력 

 <p>Single line should contain a sequence of space-separated integers $a_1, a_2, \ldots, a_n$, forming a number designation $\frac{p}{q}$ in the superfactorial numeral system. If several solution exist, output any of them.</p>

