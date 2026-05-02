#include <wiiuse/wpad.h>
#include <ogc/lwp_watchdog.h>
#include <ogc/system.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    SYSTEM_Init();
    WPAD_Init();

    system("http://Mateo08y.github.io/Uioi_7000");

    return 0;
}
