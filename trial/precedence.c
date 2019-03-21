#include <stdio.h>

#pragma warning(push)
#pragma GCC diagnostic ignored "-Wpragmas"
#pragma GCC diagnostic ignored "-Wlogical-op-parentheses"
#pragma GCC diagnostic ignored "-Wshift-count-negative"

int main(void) {
        if (0x2 || 0x0 && 0x0) {printf("\'&&\' > \'||\'\n"); }
        // && > ||: 1
        // && = ||: 0
        // && < ||: 0

        if ((0x2 & 0x2 && 0x2) && (0x2 && 0x2 & 0x2)) { printf("& > &&\n"); }
        // & > &&: 1 && 1 
        // & = &&: 1 && 0
        // & < &&: 0 && 0

        if (!(0x2 & 0x2 >= 0x2) && !(0x2 >= 0x2 & 0x2)) { printf("\'>=\' > \'&\'\n"); }
        // >= > &: !0 && !0
        // >= = &: !1 && !0
        // >= < &: !1 && !1

        if (!(0x0 >= 0x2 <= 0x2) && !(0x0 <= 0x2 >= 0x2)) { printf("\'<=\' > \'>=\'\n"); }
        // <= > >=: !0 && !0
        // <= = >=: !1 && !0 
        // <= < >=: !1 && !1

        if ((0x2 << -0x1 <= 0x2) && (0x2 <= -0x1 << 0x2)) { printf("\'<<\' > \'<=\'\n"); }
        // << > <=: 1 && 1
        // << = <=: 1 && 0
        // << < <=: 4 && 0

        if (!(0x2 + -0x2 << -0x2) && !(0x2 << -0x2 + -0x2)) { printf("\'+\' > \'<<\'\n"); }
        // + > <<: !0 && !0
        // + = <<: !0 && !-2 
        // + < <<: !smth super large && !-2

	printf("\nprecedence from low high is:\n%s %s %s %s %s %s %s\n", "||", "&&", "&", ">=", "<=", "<<", "+");
}

#pragma warning(pop)
