
//  Simma Pavan Kumar -> 21CS10060
//  Choda Y B V Anjaneya -> 21CS10020

const char *solve(int b[const static 8], int c[static 9], int d[], int e[const *]);

void func(int * f1, const int f2, volatile int f3, ...) {
    auto int a;
    register int b;
    extern int c;
    static int d = 4;
}


enum E1;
enum E2 { T1, T2 };
enum { T3 = 0, T4 } E3;

signed main() {

    unsigned long n1 = +1239;
    short n2 = ~16;
    float n3 = -3.53;
    double n4 = 2.99e-2;
    _Bool n5 = !1;
    double _Complex n6;
    double _Imaginary n7;


    int a[6] = { 1, 2, [2]=3 };
    char b[] = "This is for testing";
    char c1 = 's';
    char *c2 = &c1;
    *c2 = 'c';
    char **d = (char) { "j", b, "pqr" };

    

    n1 *= n1, n1 /= n1, n1 %= n1;
    n1 += (n1 -= n1);
    n1 <<= (n1 >>= n1);
    n1 &= n1 |= n1 ^= n1;

    n1 = (int) c;
    n1 = sizeof(int);
    n1 = sizeof n1;

   
    n1 = ( (n1==0 || n1==1) && n1!=n2 ) ? n1 = 0 : n2;
    a[n2] = n1;

    SOME_THING:
        if (n3 < n4) {
            switch (n2) {
                case 0:
                    n2++;
                    break;
                default:
                    n2--;
            }

        } else if (n3 > n4) {
            if(n2 >= n1)
                n1++;
        } else {
            if(n2 <= n1)
                n2++;
        }
    
    while(n2--)
        goto   SOME_THING;


    int t1, t2, t3, t4, t5, t6;

    t1 = t1 + t2 - t3 / t4 * t5 % t6;
    t2 = t2<<2;
    t2 = t2>>2;
    t1 = t2 & t3 | t4 ^ t5;


    for(;;)
    for(int i;;)
    for(int i=0, j=1; i!=j; i++) {
        if(j==1)
            continue;
    }

    do {
        n2++;
    } while(n2 < 0);

    
    func(1,2,3,4,5,6);

    pavan.a = 3;
    anji->a = 4;

    return 0;
}
