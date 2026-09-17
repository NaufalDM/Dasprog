#include<stdio.h>
int main()
{
    long long a,b,c,d,e,f,g,t;
    scanf("%lld %lld %lld %lld %lld %lld %lld", &a ,&b ,&c ,&d ,&e ,&f ,&g);

    if( a==b || a==c || a==d || a==e || a==f || a==g ||
        b==c || b==d || b==e || b==f || b==g ||
        c==d || c==e || c==f || c==g ||
        d==e || d==f || d==g ||
        e==f || e==g ||
        f==g)
    {
        printf("SELEKSINYA PASTI GA BENER, PREDIKSI NEUVILLETTE ADALAH MUTLAQ");
        return 0;
    }

    if(a<b){t=a;a=b;b=t;}
    if(b<c){t=b;b=c;c=t;}
    if(c<d){t=c;c=d;d=t;}
    if(d<e){t=d;d=e;e=t;}
    if(e<f){t=e;e=f;f=t;}
    if(f<g){t=f;f=g;g=t;}

    if(a<b){t=a;a=b;b=t;}
    if(b<c){t=b;b=c;c=t;}
    if(c<d){t=c;c=d;d=t;}
    if(d<e){t=d;d=e;e=t;}
    if(e<f){t=e;e=f;f=t;}

    if(a<b){t=a;a=b;b=t;}
    if(b<c){t=b;b=c;c=t;}
    if(c<d){t=c;c=d;d=t;}
    if(d<e){t=d;d=e;e=t;}

    if(a<b){t=a;a=b;b=t;}
    if(b<c){t=b;b=c;c=t;}
    if(c<d){t=c;c=d;d=t;}
    
    if(a<b){t=a;a=b;b=t;}
    if(b<c){t=b;b=c;c=t;}

    if(a<b){t=a;a=b;b=t;}

    printf("Peringkat 1 memiliki kekuatan sebesar %lld, AJAK DIA BERPETUALANG.\n", a);
    printf("Peringkat 2 memiliki kekuatan sebesar %lld, AJAK DIA BERPETUALANG.\n", b);
    printf("Peringkat 3 memiliki kekuatan sebesar %lld, AJAK DIA BERPETUALANG,\n", c);
    printf("Peringkat 4 memiliki kekuatan sebesar %lld, YAH KEKUATANMU KURENG.\n", d);
    printf("Peringkat 5 memiliki kekuatan sebesar %lld, YAH KEKUATANMU KURENG.\n", e);
    printf("Peringkat 6 memiliki kekuatan sebesar %lld, YAH KEKUATANMU KURENG.\n", f);
    printf("Peringkat 7 memiliki kekuatan sebesar %lld, YAH KEKUATANMU KURENG.\n", g);

    return 0;
}