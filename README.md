# BOJ_solution

**English** | [한국어](README.ko.md)

My solutions to algorithm problems on [Baekjoon Online Judge](https://www.acmicpc.net) (BOJ), written in C++20.

## Contents

- About 230 problems, 289 source files, all in [`Cpp20/`](Cpp20).

## File names

| Name | Meaning |
|---|---|
| `<problem number>.cpp` | Solution to that problem. `9663.cpp` is the solution to <https://www.acmicpc.net/problem/9663>. |
| `<problem number>-2.cpp`, `-3.cpp` | Another solution to the same problem, usually a different approach or a faster version |

Some files record the memory use and run time reported by the judge in a comment at the top.

## Build and run

Each file is a complete program that reads from standard input and writes to standard output.

```bash
g++ -std=c++20 -O2 -o solution Cpp20/9663.cpp
./solution < input.txt
```
