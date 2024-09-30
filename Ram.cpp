#include "Ram.h"
#include <iostream>

using namespace std;

Ram::Ram() {
    size = 100 * 1024;
    for (int i = 0; i < size; i++) {
        mem[i] = 0;  // 메모리 초기화
    }
}

char Ram::read(int address) {
    return mem[address];  // 주소에 있는 값 읽기
}

Ram::~Ram() {
    cout << "메모리 제거됨" << endl;  // 소멸 시 출력
}

void Ram::write(int address, char value) {
    mem[address] = value;  // 주소에 값 쓰기
}