# C++ Level 01

성원이것도 참고하는게 좋을듯

## x만큼 간격이 있는 n개의 숫자

```cpp
vector의 push_back을 배움
long long은 띄어쓰는게 자료형
```

## 행렬의 덧셈

```cpp
#include <iostream>이 cout, endl 라이브러리
vector.size(), vector[0].size()등등 가능
vector.clear()도 있더라
```

## 핸드폰 번호 가리기

```cpp
replace를 또 생각못했음
string이 아니라 str로 표현함 substring이 아니라 substr이었음
C#은 Length지만 C++은 length()였음 - cpp에도 뭔가 규칙이 있겠지
```

## 하샤드 수

```cpp
원래 값을 보전하지 않음... 치명적
/랑 %구분해라 ㅋㅋㅋㅋㅋ
```

## 평균 구하기

```cpp
foreach문이 for문 자체로 구현 가능한게 신기했다
vector는 size()를 사용한다
```

## 콜라츠 추측

```cpp
오버플로우가 발생해서 long으로 바꿔줬어야 했다.
이거 저번에도 틀렸을것 같은데?
```

## 최대공약수와 최소공배수

```cpp
최대공약수와 최소공배수 의 곱은 두 수의 곱이라는 것까지 기억함
이번엔 최대공약수를 먼저 구해서 더 쉽게 해결한듯?
저번 C# 거리두기 확인하기에서 사용한 이중 포문 빠져나오기가 필요했음
```

## 제일 작은 수 제거하기

```cpp
STL에 대해 좀 알 필요가 있어 보임
min_element함수는 vector.begin과 vector.end를 넣으면 가장 작은걸 찾아주는 듯 하다
min_element함수는 algorithm 헤더 선언해야 한다
vector.erase함수도 사용하자
{}를 이용해 리턴하면 벡터로 해석하는건가?
```

## 정수 제곱근 판별

```cpp
cmath를 사용함
난 정수 판별시 sqrt와 sqrt를 정수화 한걸 뻈을 때 0인지 검사함
다른사람들은 sqrt한걸 다시 pow해서 같은지 검사함
powl이 long long을 반환함
```
