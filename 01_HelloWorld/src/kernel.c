#include "mini_uart.h"

void kernel_main() {
    uart_init();
    uart_send_string("Hello World!\n");
    uart_send_string("\tBoard: Raspberry PI 4\n");
    uart_send_string("\n\nDone\n");
    while(1) {
        uart_send(uart_recv());
    }
}
