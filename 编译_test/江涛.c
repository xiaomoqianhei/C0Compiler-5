const int num1=1,num_2=-2,num_0=0;
const int num_a=0;
const char ch_a='a',ch_0 = '0',ch__='_',ch_star='*',ch_plus='-';
const char ch_B = 'B';

int num3,num4,num_arry1[3];
int num5;

char ch_c,ch_d,ch2,ch_arry1[2];
char ch_minus;

void v_func_add(int x){
    x = x +1;
    printf("x+1=",x);
}
void v_func_ret(){
    printf("void return check ok");
    return;
    printf("failed");
}
int i_func_return_1(){
    return (1);
}
int i_func_add(int y){
    
    return (y+1);
}
void func_if_cmp(){
    num5 = 1;
    if(num5 == 2){
        printf("== check failed");
    }
    num5 = i_func_add(num5);
    if(num5 ==2 )
        printf("== check ok");
    
    if(num5 != 2){
        printf("!= check failed");
    }
    num5 = i_func_return_1();
    if (num5 != 2){
        printf("return 1 check ok");
        printf("!= check ok");
    }

    if(num5 > 5){
        ;
        printf("> check failed");
    }else{
        printf("else check ok");
        printf("> check ok");
    }
    num5 = 5;
    if(num5 <5){
        printf("< check failed");
    }
    else printf("< check ok");
    num5 =4;
    if(num5 >= 5){
        printf(">= check failed");
    }
    num5 =5;
    if(num5 >= 5){
        printf("5>=5 check ok");
    }
    num5 = 6;
    if(num5 >= 5){
        printf("6>=5 check ok");
    }
    num5=6;
    if( num5 <= 5){
        printf("<= check failed");

    }
    num5 =5;
    if(num5 <=5){
        printf("5<=5 check ok");
    }
    num5 =4;
    if(num5 <=5){
            printf("4<=5 check ok");
    }
    if(num5 <= 10){
        if(num5 != 9){
            if(num5 == 4){
                printf("multiple if check ok");
            }
            else printf("multiple if check failed1");
        }else printf("multiple if check failed2");
    }else printf("multiple if check failed3");
}
void func_while(){
    const int len = 3;
    num5 = 0;
    if(num5 < len)do{
        printf("while for 3 times");
        num5 = num5+1;
    }while(num5 < len)
    
    
    if(num5 > 0)do{
        if(num5 > 0)
            printf("while if num5 > 0 for 3 times");
        num5 = num5-1;
    }while(num5 > 0)
}
void func_switch(){
    int len;
    char str[10];
    int cnt;
    num5=1;
    printf("number 1 switch check");
    if(num5==1)
            printf("match check ok");
    if(num5==2)
            printf("check failed at ",2);
    if(num5==3)
            printf("check failed at ",3);

    num5=2;
    printf("number 1 switch check");
    if(num5==1)
            printf("check failed at ",1);
        if(num5==2){
            printf("match check ok");
            printf("multiple switch statement check ok");
            }
        if(num5==3)
            printf("check failed at ",3);
    

    num5 = -1;
    printf("default check");
    if(num5==1)
            printf("check failed at ",1);
    else if(num5==2)
            printf("match check ok");
    else if(num5==3)
            printf("check failed at ",3);
    else
            printf("default check ok");

    ch_c = 'c';
    printf("char switch check ");
    if(ch_c=='a')
            printf("check failed at ",1);
    if(ch_c=='b')
            printf("check failed at ",2);
    if(ch_c=='c')
            printf("match check ok");
    
    printf("check while switch:");
    printf("enter length of string(1-10):");
    scanf(len);
    num5 = 0;
    if (num5<len) do{
        printf("enter a letter:");
        scanf(ch2);
        str[num5] = ch2;
        num5=num5+1;
    }while(num5<len)
    num5=0;
    cnt=0;
    if(num5<len)do{
        if(str[num5]== 'a')
                cnt=cnt+1;
        if(str[num5]== 'e')
                cnt=cnt+1;
        if(str[num5]== 'i')
                cnt=cnt+1;
        if(str[num5]== 'o')
                cnt=cnt+1;
        if(str[num5]== 'u')
                cnt=cnt+1;
        
        num5=num5+1;
    }while(num5<len)
    printf("cnt=",cnt);
}
void i_func_calc(int a,int b){
    const int c = 100;
    int ans;
    num3 = 100;
    ans = a -b + c * num_2 + num3;
    printf("simple expression");
    printf("ans = a - b + 100 * -2 + num3 = ",ans);
    printf("complex expression:");
    printf("3a-50=");
    printf( (num1-num_2)*a + ( num_0/b + (num_0* 5 - (c/i_func_add(num1)) ) )   );
}
char c_func_return_d(){
    printf("return 'd'");
    return ('c'+1);
}
char c_func_ch_calc(char ch,int n){
    char t;
    n = 1;
    t = ch + n ;
    printf("ch+1=",t); 
    return (t);
}
int power(int a,int b){
    int t;
    t = a;
    if( b == 1)
        return (a);
    t = t*power(a,b-1);
    return (t);
}
void main(){
    const int m = 0;
    int n;
    
    v_func_add(m);
    v_func_ret();

    printf("return 1 check");
    n =i_func_return_1();
    if(n==1)
        printf("ok");

    n = 3;
    i_func_calc(num_2,n);

    printf(c_func_return_d());

    scanf(ch_c);
    printf(c_func_ch_calc(ch_c,num3));

    func_if_cmp();

    func_while();

    func_switch();

    printf("check power:");
    printf("-5^3=",power(-5,3));

}