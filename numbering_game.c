/**********************************************
	概要:
		数あてゲームを行うプログラム

	作成者:
		Kouhei Yamamoto

	作成開始日:
		2021/09/19

	最終更新日:
		2021/09/20
***********************************************/

# include <time.h>
# include <stdio.h>
# include <stdlib.h>

# define MAX_STAGE   (10)		// 最大入力回数
# define RAND_RANGE	 (1000)		// 乱数の範囲


int main(void)
{
	int i;
	int no;						// 入力された値
	int ans;					// 当てる数
	int stage;					// 入力した回数
	int num[MAX_STAGE];			// 読み込んだ値の履歴

	// タネの初期化と範囲の設定
	srand(time(NULL));
	ans = 1 + rand() % RAND_RANGE;

	printf("1~999の整数を当ててください。\n\n");

	stage = 0;

	do {
		printf("残り%d回 - いくつかな: ", MAX_STAGE - stage);
		scanf("%d", &no);
		num[stage++] = no;

		if (no > ans) {
			printf("\aもっと小さいよ。\n");
		} else if (no < ans) {
			printf("\aもっと大きいよ。\n");
		} 
	} while (no != ans && stage < MAX_STAGE);

	if (no != ans) {
		printf("\a残念。正解は%dでした。\n", ans);
	} else {
		printf("正解です。\n");
		printf("%d回で正解しました。\n", stage);
	}

	puts("\n ----- 入力履歴 -----");
	for (i = 0; i < stage; i++) {
		printf(" %2d : %4d %+4d\n", i + 1, num[i], num[i] - ans);
	}

	return 0;

}