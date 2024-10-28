#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"



void task1(void *pvParameter) {

	while (1) {
        printf("Task 1");
		vTaskDelay(pdMS_TO_TICKS(1000));
	}
}

void task2(void *pvParameter) {

	while (1) {
        printf("Task 2");
		vTaskDelay(pdMS_TO_TICKS(1000));
	}
}



void app_main(void)
{

    xTaskCreate(&task1, "task1", 4096, NULL, 5, NULL);
    xTaskCreate(&task2, "task2", 4096, NULL, 10, NULL);
}