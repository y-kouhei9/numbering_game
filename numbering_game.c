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

# define MAX_STAGE   (10)		// 入力制限回数
# define RAND_RANGE	 (1000)		// 乱数の範囲


int main(void)
{
	int no;						// 入力された値
	int ans;					// 当てる数
	int remain = MAX_STAGE;		// 残入力回数

	// タネの初期化と範囲の設定
	srand(time(NULL));
	ans = 1 + rand() % RAND_RANGE;

	printf("1~999の整数を当ててください。\n\n");

	do {
		printf("残り%d回 - いくつかな: ", remain);
		scanf("%d", &no);
		remain--;

		if (no > ans) {
			printf("\aもっと小さいよ。\n");
		} else if (no < ans) {
			printf("\aもっと大きいよ。\n");
		} 
	} while (no != ans && remain > 0);

	if (no != ans) {
		printf("\a残念。正解は%dでした。\n", ans);
	} else {
		printf("正解です。\n");
		printf("%d回で正解しました。\n", MAX_STAGE - remain);
	}

	return 0;

}