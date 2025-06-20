# 배열 기반 스택 (Stack - Array)

## 개념
스택은 LIFO(Last In First Out) 구조의 자료구조입니다. 배열을 이용해 스택을 구현할 수 있으며, top 인덱스를 기준으로 push/pop 연산을 수행합니다.

## 구현된 기능
- 스택 생성
- push (삽입)
- pop (삭제 및 반환)
- peek (최상단 값 확인)
- isEmpty / isFull (상태 확인)
- 메모리 해제

## 테스트
- push로 데이터 삽입 후 peek 확인
- pop으로 데이터 제거 및 반환 확인
- 비어 있는 상태에서 pop/peek 호출 (오류 처리)
- 메모리 해제 테스트