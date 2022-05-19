#include <stdio.h>

typedef enum {true, false} bool;

int brain_is_smooth(bool wifi, bool login, bool admin) {
    int flags = 0;
    flags += (int) ! wifi;
    flags += ((int) ! login)*10;
    flags += ((int) ! admin)*100;

    switch (flags) {
        case 0: printf("Welcome back!\n"); return flags;
        case 1: printf("Must be connected to wifi!\n"); break;
        case 10: printf("Must login to your account\n"); break;
        case 11: printf("Must be connected to WiFi\n"); break;
        case 100: printf("Must be an admin\n"); break;
        case 110: printf("Must login as admin\n"); break;
        case 111: printf("Must be connected to WiFi!\n"); break;
    }
}
int main() {
    bool wifi, login, admin;
    wifi = true;
    login = true;
    admin = true;
    brain_is_smooth(wifi,login,admin);
}
