
#include<reg51.h>
#define LEDPORT P2
#define PORTUS P3
int count;
void wait_second()
{
unsigned int x;
for(x=0;x<33000;x++);
}
void green_red()
{
int green_red=160;
int
ten_seconds[10]={0x67,0x7F,0x07,0x7C,0x6D,0x66,0x4F,0x5B,0
x06,0x3F};
for(count=0;count<10;count++)

2

{P3=~ten_seconds[count];
P2=~green_red;
wait_second();
} }
void blinking()
{
int yellow_blinking[5]={72,0,72,0,72};
int five_seconds[5]={0x66,0x4F,0x5B,0x06,0x3F};
for(count=0;count<5;count++)
{P3=~five_seconds[count];
P2=~yellow_blinking[count];
wait_second();
}}
void red_green()
{
int red_green=20;
int
ten_seconds[10]={0x67,0x7F,0x07,0x7C,0x6D,0x66,0x4F,0x5B,0
x06,0x3F};
for(count=0;count<10;count++)
{P3=~ten_seconds[count];
P2=~red_green;
wait_second();
}
}
main()
{
for(;;){
green_red();
blinking();
red_green();
blinking();
}
}
