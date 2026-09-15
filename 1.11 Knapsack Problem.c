#include <stdio.h>

int main() {
    int N, W;
    int value[1000], weight[1000];
    int dp[1001] = {0};

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        scanf("%d", &value[i]);

    for (int i = 0; i < N; i++)
        scanf("%d", &weight[i]);

    scanf("%d", &W);

    for (int i = 0; i < N; i++) {
        for (int j = W; j >= weight[i]; j--) {
            if (dp[j] < dp[j - weight[i]] + value[i])
                dp[j] = dp[j - weight[i]] + value[i];
        }
    }

    printf("%d", dp[W]);

    return 0;
}
