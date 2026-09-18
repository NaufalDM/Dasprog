#include <stdio.h>

int main() {
    int v1,v2,v3,v4,v5;
    char s1,s2,s3,s4,s5;
    int c1,c2,c3,c4,c5;
    int pair=0, three=0, four=0, flush=0;

    scanf("%d %c",&v1,&s1);
    scanf("%d %c",&v2,&s2);
    scanf("%d %c",&v3,&s3);
    scanf("%d %c",&v4,&s4);
    scanf("%d %c",&v5,&s5);

    c1=(v1==v2)+(v1==v3)+(v1==v4)+(v1==v5)+1;
    c2=(v2==v1)+(v2==v3)+(v2==v4)+(v2==v5)+1;
    c3=(v3==v1)+(v3==v2)+(v3==v4)+(v3==v5)+1;
    c4=(v4==v1)+(v4==v2)+(v4==v3)+(v4==v5)+1;
    c5=(v5==v1)+(v5==v2)+(v5==v3)+(v5==v4)+1;

    if(c1==4||c2==4||c3==4||c4==4||c5==4) four=1;
    if(c1==3||c2==3||c3==3||c4==3||c5==3) three=1;

    if(c1==2) pair++;
    if(c2==2&&v2!=v1) pair++;
    if(c3==2&&v3!=v1&&v3!=v2) pair++;
    if(c4==2&&v4!=v1&&v4!=v2&&v4!=v3) pair++;
    if(c5==2&&v5!=v1&&v5!=v2&&v5!=v3&&v5!=v4) pair++;

    if(s1==s2&&s2==s3&&s3==s4&&s4==s5) flush=1;

    if(four)
        printf("Four of a Kind");
    else if(three&&pair==1)
        printf("Full House");
    else if(flush)
        printf("Flush");
    else if(three)
        printf("Three of a Kind");
    else if(pair==2)
        printf("Two Pair");
    else if(pair==1)
        printf("One Pair");
    else
        printf("Tidak ada kombinasi khusus");

    return 0;
}
