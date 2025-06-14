# [Bronze IV] Штангист - 27222 

[문제 링크](https://www.acmicpc.net/problem/27222) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

수학, 사칙연산

### 제출 일자

2025년 6월 7일 01:04:26

### 문제 설명

<p>Штангист готовится к соревнованиям и хочет проанализировать набранную мышечную массу.</p>

<p>Он анализирует записи о своих тренировках за последние $n$ дней. Для каждого дня ему известна масса тела утром $x_i$ и масса тела вечером $y_i$. Также известно, в какие дни штангист проводил тренировку.</p>

<p>Он считает, что в те дни, когда он проводил тренировку, увеличение массы тела, если оно произошло, равно приросту мышечной массы, а если масса тела уменьшалась или тренировки не было, то прирост мышечной массы в этот день равено $0$.</p>

<p>Помогите штангисту определить суммарный прирост его мышечной массы.</p>

### 입력 

 <p>Первая строка ввода содержит число $n$ --- количество анализируемых дней ($1 \le n \le 1000$).</p>

<p>Вторая строка содержит $n$ целых чисел, $i$-е число равно $1$, если в $i$-й день была тренировка и $0$, если в $i$-й день тренировки не было.</p>

<p>Следующие $n$ строк содержат результаты измерения массы тела штангиста: по два целых числа $x_i$ и $y_i$ --- массу тела в граммах ($30\,000 \le x_i, y_i \le 200\,000$).</p>

### 출력 

 <p>Выведите одно целое число --- суммарный прирост мышечной массы штангиста.</p>

