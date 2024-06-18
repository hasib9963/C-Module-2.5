int main()
{
    int a,b,add, sub, mult;
    float div;
    scanf("%d %d", &a,&b);
    add = a+b;
    sub = a-b;
    mult = a*b;
    div = (float)a/b;
    printf("%d+%d = %d\n",a,b,add);
    printf("%d-%d = %d\n",a,b,sub);
    printf("%d*%d = %d\n",a,b,mult);
    printf("%d/%d = %.3f\n",a,b,div);
}
