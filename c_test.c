#include <stdio.h>
// ข้อที่ 8 จงเขียนโปรแกรมรับตัวเลข3ตัวแล้วหาตัวเลขที่มีค่าน้อยสุด
// วิธีที่ 1
int main(){
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b && a<c)
    {
        printf("%d",a);
    }
    else if (b<c && b<a)
    {
        printf("%d",b);
    }
    else if (c<a && c<b)
    {
        printf("Min :%d",c);
    }
    
    return 0;
}


#include <stdio.h>
//วิธีที่2
void drawstar(int n)
{
    if (n == 0)
    {
        return;
    };
    printf("* ");  
    drawstar(n - 1);
}
int main(){
    int n,a;
    printf("Enter numbers: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        drawstar(n);
        printf("\n");
    }
}
