#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h> // For Linux/Mac. If on Windows, use <windows.h> and Sleep(1000)

int main() {
    // Variable to hold the raw time in seconds (Unix Epoch)
    time_t rawtime = 0;
    
    // Pointer to a time struct that holds hours, minutes, seconds, etc.
    struct tm *pTime = NULL;
    
    // Boolean to control our clock loop
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    // Infinite loop to keep the clock updating
    while(isRunning) {
        
        // 1. Get the current time in seconds and store it in rawtime
        time(&rawtime);
        
        // 2. Convert the raw seconds into local time and point pTime to it
        pTime = localtime(&rawtime);
        
        // 3. Print the time (Zero-padded, with a carriage return)
        // We use the arrow operator (->) to access struct members from a pointer
        printf("%02d:%02d:%02d\r", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
        
        // 4. Sleep for 1 second before looping again
        // Note: Use Sleep(1000); if you are on Windows using <windows.h>
        sleep(1); 
    }

    return 0;
}