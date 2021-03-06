/*
함수는 입력과 출력 간 관계의 표현식이며, 또다른 의미로는 하나의 단위로 실행되는 code 집합입니다.
*/

#include <stdio.h>

void call_by_value(int m)
{
  printf("받은 함수인자는 %d입니다.(할당전)\n", m);
  m = 5;
  printf("받은 함수인자는 %d입니다.(할당후)\n", m);
}

void call_by_reference(int arr[])
{
  for (int i = 0; i < 3; i ++)
  {
    printf("받은 함수인자는 arr[%d]는 %d입니다.(할당전)\n", i, arr[i]);
  }
  arr[0] = 5;
  for (int i = 0; i < 3; i ++)
  {
    printf("받은 함수인자는 arr[%d]는 %d입니다.(할당후)\n", i, arr[i]);
  }
}

int add (int m, int n)
{
  return m + n;
}

void print(int m)
{
  printf("%d입니다.\n", m);
}

int three(void)
{
  return 3;
}

int main(void)
{
  /*
  함수 선언
  - [반환 자료형] [함수 이름] (함수 매개변수) { 함수 코드 ...  return [반환값] }
  - c는 순서지향으로, 실행 전 함수가 선언이 되어 있어야 합니다. (정의는 뒤에 해도 됩니다.)
  - c는 함수 안에 함수를 선언할 수 없습니다.
  */

  // 함수 실행
	printf("=== 함수 실행 ===\n");
  printf("add(1, 5)는 %d입니다.\n", add(1, 5));
  print(5);
  printf("three()는 %d입니다.\n", three());

  /*
  함수 매개변수
  - c는 인자를 복사하고 매개변수에 할당하여, 함수를 실행합니다.
  - call-by-value: 매개변수에 값을 전달합니다.
  - call-by-reference: 매개변수에 주소값을 전달합니다.
  */
  /* call-by-value */
  int m = 3;
  call_by_value(m);
  printf("넘겨준 함수인자 m은 %d입니다.(함수실행 뒤)\n", m);

  /* call-by-reference */
  int arr[] = { 1, 2, 3};
  call_by_reference(arr);
    for (int i = 0; i < 3; i ++)
  {
    printf("넘겨준 함수인자는 arr[%d]는 %d입니다.(함수실행 뒤)\n", i, arr[i]);
  }
}
