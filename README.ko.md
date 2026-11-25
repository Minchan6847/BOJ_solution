# BOJ_solution

[English](README.md) | **한국어**

[백준 온라인 저지](https://www.acmicpc.net)(BOJ)의 알고리즘 문제를 C++20으로 푼 풀이 모음입니다.

## 구성

- 약 230문제, source 파일 289개가 모두 [`Cpp20/`](Cpp20)에 있습니다.

## 파일 이름

| 이름 | 의미 |
|---|---|
| `<문제 번호>.cpp` | 해당 문제의 풀이. `9663.cpp`는 <https://www.acmicpc.net/problem/9663>의 풀이입니다. |
| `<문제 번호>-2.cpp`, `-3.cpp` | 같은 문제의 다른 풀이. 주로 다른 접근이나 더 빠른 버전입니다. |

일부 파일은 채점 결과의 memory 사용량과 실행 시간을 맨 위 주석에 적어 두었습니다.

## Build와 실행

각 파일은 표준 입력을 읽고 표준 출력에 쓰는 완결된 프로그램입니다.

```bash
g++ -std=c++20 -O2 -o solution Cpp20/9663.cpp
./solution < input.txt
./solution < input.txt | diff - output.txt
```
