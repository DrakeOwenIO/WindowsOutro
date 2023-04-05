#include <iostream>
#include <windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

using namespace std;

int playSong(){
    // Start the song
    PlaySound(TEXT("music/Outro.wav"), NULL, SND_FILENAME | SND_ASYNC);
    return 0;
}

int main()
{
    // Declare dat boi
    int countDown = 10;

    // Outro Segment
    cout<< "Thanks for using Windows!\n";
    Sleep(1000);
    cout<< "Shutdown in...\n";
    Sleep(1000);

    // Play the outro
    playSong();

    // Countdown loop
    for (int i = countDown; i > 0; i--) {
        cout << i << "\n";
        Sleep(1000);
    }
    cout<<"\n";

    system("c:\\windows\\system32\\shutdown /s /t 3");

    cout << "Bye!";

    Sleep(10000);
    return 0;
}
