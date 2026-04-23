/**
 * @file app_info.c
 * @brief Implements application metadata utilities.
 */

#include <stdio.h>
#include <time.h>
#include "app_info.h"

#define APP_NAME "CalcCLI"
#define APP_VERSION "1.0.0"
#define APP_DEVELOPER "Alfred"

void print_app_info(void)
{
    time_t now = time(NULL);
    struct tm *local_time = localtime(&now);

    char time_buffer[64];
    strftime(time_buffer, sizeof(time_buffer), "%Y-%m-%d %H:%M:%S", local_time);

    printf("==============================\n");
    printf(" Application: %s\n", APP_NAME);
    printf(" Version    : %s\n", APP_VERSION);
    printf(" Developer  : %s\n", APP_DEVELOPER);
    printf(" Runtime    : %s\n", time_buffer);
    printf("==============================\n");
}