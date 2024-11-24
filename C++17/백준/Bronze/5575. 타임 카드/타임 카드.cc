#include <stdio.h>
int main() {
    for (int i = 0; i < 3; i++) {
        int inH, inM, inS, outH, outM, outS;
        scanf("%d %d %d %d %d %d", &inH, &inM, &inS, &outH, &outM, &outS);
        int rH, rM, rS;

        if ((outS - inS) < 0) {
            rS = 60 + (outS - inS);
            inM++;
        } else
            rS = outS - inS;
        if ((outM - inM) < 0) {
            rM = 60 + (outM - inM);
            inH++;
        } else
            rM = outM - inM;
        rH = outH - inH;

        printf("%d %d %d\n", rH, rM, rS);
    }

    return 0;
}