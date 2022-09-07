#include <iostream>      //For I/O Functions
#include <windows.h>   //For Beep & Sleep functions
#include<stdlib.h>  //For System Pause
using namespace std;

int main()
{
    for (int i = 0; i < 30; i++)
        Beep(400 + i * 50, 1000 - i * 40);
}