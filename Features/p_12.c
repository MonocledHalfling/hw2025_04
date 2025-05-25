#include <stdio.h>

// 한 글자의 바이트 수를 판단
int get_utf8_char_len(unsigned char ch) {
    if ((ch & 0x80) == 0x00) return 1;        // ASCII
    else if ((ch & 0xE0) == 0xC0) return 2;   // 2-byte
    else if ((ch & 0xF0) == 0xE0) return 3;   // 한글 (3-byte)
    else if ((ch & 0xF8) == 0xF0) return 4;   // 4-byte (이모지 등)
    return 1;                                 // default
}

void reverse_han(const char *str) {
    const char *rs[100];
    int count = 0;

    const char *p = str;
    while (*p) { // '\0'가 아닐 때까지
        rs[count++] = p;
        p += get_utf8_char_len((unsigned char)*p);
    }

    for (int i = count - 1; i >= 0; i--) { // i 를 역순으로 진행
        int len = get_utf8_char_len((unsigned char)*rs[i]);
        fwrite(rs[i], 1, len, stdout); // 글자가 깨지지 않게 하기 위해 하나씩 글자를 설정함.
    }
    printf("\n");
}

void p_12() {
    char st[100];
    fgets(st, sizeof(st), stdin);
    reverse_han(st);
}