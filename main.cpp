#include "mbed.h"
#include <cstdio>

InterruptIn buttn(pc_13);

void buttn_fall(){
    printf("buttn pressed!!\r\n")
}
 
 //main()run in its own threadin the OS
 int main()
{
    print("this is mbed os v%d\r\n",MBED_VERSION);

buttn.fall(buttn_fall);
while

