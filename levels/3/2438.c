#include <stdio.h>

int main()
{
    /* 별을 가로 세로로 얼마나 출력할지 결정하는 변수 N */
    /* N만큼 가로 세로로 반복 시키는 변수 i,j */
    /* int 대신 short 사용 => 메모리 공간 최적화 */
    short N,i,j;
    /* 별을 가로 x 세로로 얼마나 출력할지 입력 받아오기 */
    scanf("%hd",&N);
    /* 세로 기준 반복 */
    for(i = 1;i <= N;i++){
        /* 가로 기준 반복 */
        for(j = 0;j < i;j++){
            /* 가로 반복문에는 별 출력 */
            putc('*',stdout);
        }
        /* 각 라인이 끝나면 개행 (전체적인 모양을 삼각형으로 만듬) */
        putc('\n',stdout);
    }
}