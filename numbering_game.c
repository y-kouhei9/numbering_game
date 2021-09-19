/**********************************************
	概要:
		数あてゲームを行うプログラム

	作成者:
		Kouhei Yamamoto

	作成開始日:
		2021/09/19

	最終更新日:
		2021/09/19
***********************************************/

# include <time.h>
# include <stdio.h>
# include <stdlib.h>


int main(void)
{
	int no;
	int ans;

	srand(time(NULL));
	ans = 1 + rand() % 1000;

	printf("1~999の整数を当ててください。\n\n");

	do {
		printf("いくつかな: ");
		scanf("%d", &no);

		if (no > ans) {
			printf("\aもっと小さいよ。\n");
		} else if (no < ans) {
			printf("\aもっと大きいよ。\n");
		} 
	} while (no != ans);

	printf("正解です。\n");

	return 0;

}