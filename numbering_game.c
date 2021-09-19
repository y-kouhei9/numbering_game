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

# include <stdio.h>

int main(void)
{
	int no;
	int ans = 8;

	printf("0~9の整数を当ててください。\n\n");

	while (1) {
		printf("いくつかな: ");
		scanf("%d", &no);

		if (no > ans) {
			printf("\aもっと小さいよ\n");
			continue;
		} else if (no < ans) {
			printf("\aもっと大きいよ\n");
			continue;
		} else if (no == ans) {
			printf("正解です\n");
			break;
		}	
	}

	return 0;

}